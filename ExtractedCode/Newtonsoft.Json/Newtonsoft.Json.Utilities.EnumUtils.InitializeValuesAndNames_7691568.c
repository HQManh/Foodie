// rea decompile_all
// name: Newtonsoft.Json.Utilities.EnumUtils$$InitializeValuesAndNames
// address: 0x7691568
// body: available
// range: 0x7691568-0x7691a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76919a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76919a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7691a3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_EnumUtils__InitializeValuesAndNames(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if ((DAT_095225a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c05a8);
    FUN_03f5c2a4(&DAT_091840d8);
    FUN_03f5c2a4(&DAT_091716a8);
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_091c95f0);
    FUN_03f5c2a4(&DAT_091ca440);
    FUN_03f5c2a4(&DAT_091caa80);
    FUN_03f5c2a4(&DAT_091717b0);
    FUN_03f5c2a4(&DAT_091788c0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091e97a8);
    FUN_03f5c2a4(&DAT_09190560);
    FUN_03f5c2a4(&DAT_091807b8);
    DAT_095225a0 = 1;
  }
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_Enum__GetNames(param_1,0);
  if (lVar3 != 0) {
    lVar4 = FUN_03f5c394(DAT_091805f8,*(undefined4 *)(lVar3 + 0x18));
    lVar5 = FUN_03f5c394(DAT_091807b8,*(undefined4 *)(lVar3 + 0x18));
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar12 = 0;
      uVar10 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      lVar15 = 0x20;
      do {
        if (uVar10 <= uVar12) {
LAB_076919a8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (param_1 == (long *)0x0) goto LAB_076919a4;
        lVar13 = *(long *)(lVar3 + 0x20 + uVar12 * 8);
        plVar6 = (long *)(**(code **)(*param_1 + 0x6f8))
                                   (param_1,lVar13,0x38,*(undefined8 *)(*param_1 + 0x700));
        if (plVar6 == (long *)0x0) goto LAB_076919a4;
        uVar7 = (**(code **)(*plVar6 + 0x2f8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x300));
        if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091840e8);
        }
        uVar8 = Newtonsoft_Json_Utilities_EnumUtils__ToUInt64(uVar7);
        lVar14 = DAT_095354b8;
        uVar7 = DAT_091716a8;
        if (lVar5 == 0) goto LAB_076919a4;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_076919a8;
        iVar1 = *(int *)(DAT_095354b8 + 0xe4);
        *(undefined8 *)(lVar5 + 0x20 + uVar12 * 8) = uVar8;
        if (iVar1 == 0) {
          FUN_03f5c424(lVar14);
        }
        uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
        uVar7 = (**(code **)(*plVar6 + 0x218))(plVar6,uVar7,1,*(undefined8 *)(*plVar6 + 0x220));
        uVar7 = FUN_04ab7e4c(uVar7,DAT_091c95f0);
        if (*(int *)(DAT_09190560 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190560);
        }
        puVar11 = *(undefined8 **)(DAT_09190560 + 0xb8);
        lVar14 = puVar11[1];
        if (lVar14 == 0) {
          if (*(int *)(DAT_09190560 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190560);
            puVar11 = *(undefined8 **)(DAT_09190560 + 0xb8);
          }
          uVar8 = *puVar11;
          lVar14 = thunk_FUN_03f9944c(DAT_091788c0);
          FUN_05324070(lVar14,uVar8,DAT_091e97a8,0);
          plVar6 = (long *)(*(long *)(DAT_09190560 + 0xb8) + 8);
          *plVar6 = lVar14;
          thunk_FUN_03f5d7b8(plVar6,lVar14);
        }
        uVar7 = FUN_04af8044(uVar7,lVar14,DAT_091ca440);
        lVar14 = FUN_04b00770(uVar7,DAT_091caa80);
        if (lVar14 != 0) {
          lVar13 = lVar14;
        }
        iVar1 = FUN_04ef5da4(lVar4,lVar13,0,uVar12 & 0xffffffff,DAT_091c05a8);
        if (iVar1 != -1) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          FUN_039b1d98(param_1);
          uVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
          uVar9 = thunk_FUN_03fc39d4(&DAT_09201658);
          uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar7,lVar13,uVar8,0);
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar8 = thunk_FUN_03f9944c();
          System_InvalidOperationException___ctor(uVar8,uVar7,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091c9218);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar7);
        }
        if (param_2 != (long *)0x0) {
          lVar13 = (**(code **)(*param_2 + 0x178))
                             (param_2,lVar13,lVar14 != 0,*(undefined8 *)(*param_2 + 0x180));
        }
        if (lVar4 == 0) goto LAB_076919a4;
        if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_076919a8;
        *(long *)(lVar4 + uVar12 * 8 + 0x20) = lVar13;
        thunk_FUN_03f5d7b8(lVar4 + lVar15,lVar13);
        uVar10 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 8;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    uVar7 = DAT_091717b0;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
    if (param_1 != (long *)0x0) {
      uVar2 = (**(code **)(*param_1 + 0x1f8))(param_1,uVar7,0,*(undefined8 *)(*param_1 + 0x200));
      uVar7 = thunk_FUN_03f9944c(DAT_091840d8);
      Newtonsoft_Json_Utilities_EnumInfo___ctor(uVar7,uVar2 & 1,lVar5,lVar3,lVar4);
      return uVar7;
    }
  }
LAB_076919a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

