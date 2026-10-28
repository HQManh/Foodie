// rea decompile_all
// name: System.Globalization.CultureInfo$$CreateSpecificCulture
// address: 0x754731c
// body: available
// range: 0x754731c-0x7547563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75474f4 to 0x754708c System.Globalization.CultureInfo$$get_InvariantCulture (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x754755c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7547560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Globalization_CultureInfo__CreateSpecificCulture(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  ushort local_64 [2];
  
  if ((DAT_09521902 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09521902 = 1;
  }
  local_64[0] = 0;
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar12 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921fa28);
    System_ArgumentNullException___ctor(uVar12,uVar8,0);
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar9 = (long *)System_Globalization_CultureInfo__get_InvariantCulture();
      return plVar9;
    }
    uVar8 = System_String__ToLowerInvariant(param_1,0);
    plVar9 = (long *)thunk_FUN_03f9944c(DAT_09182ff8);
    System_Object___ctor(plVar9,0);
    *(undefined1 *)(plVar9 + 0x16) = 1;
    uVar10 = System_Globalization_CultureInfo__ConstructLocaleFromName(plVar9,uVar8);
    if ((uVar10 & 1) != 0) {
      uVar10 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
      if ((uVar10 & 1) != 0) {
        uVar8 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        plVar9 = (long *)System_Globalization_CultureInfo__CreateSpecificCultureFromNeutral(uVar8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      puVar13 = (undefined4 *)plVar9[0x12];
      lVar14 = plVar9[9];
      uVar5 = *(undefined4 *)((long)plVar9 + 0x1c);
      uVar1 = *puVar13;
      uVar3 = puVar13[1];
      uVar2 = puVar13[2];
      uVar4 = puVar13[3];
      uVar6 = puVar13[4];
      uVar7 = System_Globalization_CultureInfo__get_CalendarType(plVar9);
      lVar11 = plVar9[4];
      lVar15 = plVar9[0xd];
      local_64[0] = (ushort)((uint)uVar6 >> 8) & 0xff;
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_Char__ToString(local_64,0);
      lVar11 = System_Globalization_CultureData__GetCultureData
                         (lVar14,0,uVar5,uVar7,(int)lVar11,lVar15,uVar1,uVar4,uVar2,uVar3,
                          (byte)uVar6 & 1,uVar8,0);
      plVar9[0x18] = lVar11;
      thunk_FUN_03f5d7b8();
      return plVar9;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar12 = System_Globalization_CultureInfo__CreateNotFoundException(param_1);
  }
  uVar8 = thunk_FUN_03fc39d4(&DAT_091c6c88);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar12,uVar8);
}

