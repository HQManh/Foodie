// rea decompile_all
// name: System.Globalization.CultureInfo$$.ctor
// address: 0x7548d68
// body: available
// range: 0x7548d68-0x7548fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7548f58 to 0x75488f8 System.Globalization.CultureInfo$$ConstructInvariant (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7548fc0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CultureInfo___ctor(long param_1,long param_2,byte param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  ushort local_64 [2];
  
  if ((DAT_095218fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091713a0);
    DAT_095218fd = 1;
  }
  local_64[0] = 0;
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar11 = thunk_FUN_03f9944c();
    uVar12 = thunk_FUN_03fc39d4(&DAT_0921fa28);
    System_ArgumentNullException___ctor(uVar11,uVar12,0);
  }
  else {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(byte *)(param_1 + 0x10) = param_4 & 1;
    *(byte *)(param_1 + 0x28) = param_3 & 1;
    uVar11 = System_Object__GetType(param_1,0);
    uVar12 = DAT_091713a0;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
    bVar9 = System_Type__op_Inequality(uVar11,uVar12,0);
    iVar5 = *(int *)(param_2 + 0x10);
    *(byte *)(param_1 + 200) = bVar9 & 1;
    if (iVar5 == 0) {
      uVar12 = System_Globalization_CultureData__get_Invariant(0);
      *(undefined8 *)(param_1 + 0xc0) = uVar12;
      thunk_FUN_03f5d7b8();
      System_Globalization_CultureInfo__ConstructInvariant(param_1,param_4 & 1);
      return;
    }
    uVar12 = System_String__ToLowerInvariant(param_2,0);
    uVar13 = System_Globalization_CultureInfo__ConstructLocaleFromName(param_1,uVar12);
    if ((uVar13 & 1) != 0) {
      puVar15 = *(undefined4 **)(param_1 + 0x90);
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      uVar6 = *(undefined4 *)(param_1 + 0x1c);
      uVar1 = *puVar15;
      uVar3 = puVar15[1];
      uVar2 = puVar15[2];
      uVar4 = puVar15[3];
      uVar7 = puVar15[4];
      uVar10 = System_Globalization_CultureInfo__get_CalendarType(param_1);
      local_64[0] = (ushort)((uint)uVar7 >> 8) & 0xff;
      uVar8 = *(undefined4 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x68);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar14 = System_Char__ToString(local_64,0);
      uVar12 = System_Globalization_CultureData__GetCultureData
                         (uVar12,param_3 & 1,uVar6,uVar10,uVar8,uVar11,uVar1,uVar4,uVar2,uVar3,
                          (byte)uVar7 & 1,uVar14,0);
      *(undefined8 *)(param_1 + 0xc0) = uVar12;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar12);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar11 = System_Globalization_CultureInfo__CreateNotFoundException(param_2);
  }
  uVar12 = thunk_FUN_03fc39d4(&DAT_091c6c78);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar11,uVar12);
}

