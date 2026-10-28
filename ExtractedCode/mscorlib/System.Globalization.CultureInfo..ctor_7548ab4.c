// rea decompile_all
// name: System.Globalization.CultureInfo$$.ctor
// address: 0x7548ab4
// body: available
// range: 0x7548ab4-0x7548d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7548b50 to 0x75488f8 System.Globalization.CultureInfo$$ConstructInvariant (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7548c8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7548d5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CultureInfo___ctor(long param_1,int param_2,byte param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  ushort local_68 [2];
  int local_64;
  
  local_68[0] = 0;
  local_64 = param_2;
  System_Object___ctor(param_1,0);
  if (param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar10 = thunk_FUN_03f9944c();
    uVar15 = thunk_FUN_03fc39d4(&DAT_09219f08);
    uVar12 = thunk_FUN_03fc39d4(&DAT_0920aaf0);
    System_ArgumentOutOfRangeException___ctor(uVar10,uVar15,uVar12,0);
    uVar15 = thunk_FUN_03fc39d4(&DAT_091c6c70);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,uVar15);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  *(byte *)(param_1 + 0x10) = param_4 & 1;
  *(byte *)(param_1 + 0x28) = param_3 & 1;
  if (param_2 == 0x7f) {
    uVar10 = System_Globalization_CultureData__get_Invariant(0);
    *(undefined8 *)(param_1 + 0xc0) = uVar10;
    thunk_FUN_03f5d7b8();
    System_Globalization_CultureInfo__ConstructInvariant(param_1,param_4 & 1);
    return;
  }
  uVar11 = FUN_03f62a54(param_1,param_2);
  if ((uVar11 & 1) != 0) {
    puVar14 = *(undefined4 **)(param_1 + 0x90);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    cVar8 = *(char *)(param_1 + 0x28);
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    uVar1 = *puVar14;
    uVar3 = puVar14[1];
    uVar2 = puVar14[2];
    uVar4 = puVar14[3];
    uVar6 = puVar14[4];
    uVar9 = System_Globalization_CultureInfo__get_CalendarType(param_1);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    local_68[0] = (ushort)((uint)uVar6 >> 8) & 0xff;
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = System_Char__ToString(local_68,0);
    uVar10 = System_Globalization_CultureData__GetCultureData
                       (uVar10,cVar8 != '\0',uVar5,uVar9,uVar7,uVar15,uVar1,uVar4,uVar2,uVar3,
                        (byte)uVar6 & 1,uVar12,0);
    *(undefined8 *)(param_1 + 0xc0) = uVar10;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar10);
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar10 = System_Globalization_CultureInfo__get_InvariantCulture();
  uVar15 = System_Globalization_CultureInfo__get_InvariantCulture();
  uVar15 = System_Int32__ToString(&local_64,uVar15,0);
  uVar12 = System_Globalization_CultureInfo__get_InvariantCulture();
  uVar13 = thunk_FUN_03fc39d4(&DAT_09213550);
  uVar12 = System_Int32__ToString(&local_64,uVar13,uVar12,0);
  uVar13 = thunk_FUN_03fc39d4(&DAT_091ff9c8);
  uVar10 = System_String__Format(uVar10,uVar13,uVar15,uVar12,0);
  thunk_FUN_03fc39d4(&DAT_09183000);
  uVar15 = thunk_FUN_03f9944c();
  uVar12 = thunk_FUN_03fc39d4(&DAT_09219f08);
  System_Globalization_CultureNotFoundException___ctor(uVar15,uVar12,uVar10,0);
  uVar10 = thunk_FUN_03fc39d4(&DAT_091c6c70);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar15,uVar10);
}

