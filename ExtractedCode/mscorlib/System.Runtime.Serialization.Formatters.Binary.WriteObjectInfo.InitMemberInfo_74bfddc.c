// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo$$InitMemberInfo
// address: 0x74bfddc
// body: available
// range: 0x74bfddc-0x74c0103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bfe94 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c00f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c00f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c0100 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitMemberInfo(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  
  if ((DAT_09521486 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_0918a8b8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521486 = 1;
  }
  if ((*(long *)(param_1 + 0x60) == 0) ||
     (plVar2 = *(long **)(*(long *)(param_1 + 0x60) + 0x10), plVar2 == (long *)0x0))
  goto LAB_074c00f0;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x308))
                             (plVar2,*(undefined8 *)(param_1 + 0x20),
                              *(undefined8 *)(*plVar2 + 0x310));
  lVar8 = DAT_0918a8b8;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else if ((*plVar2 != DAT_0918a8b8) || (*(long **)(param_1 + 0x38) = plVar2, *plVar2 != lVar8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar2);
  }
  plVar6 = (long *)(param_1 + 0x38);
  thunk_FUN_03f5d7b8(plVar6,plVar2);
  if (*plVar6 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = thunk_FUN_03f9944c(DAT_0918a8b8);
    System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache___ctor(uVar3,uVar7);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    thunk_FUN_03f5d7b8(plVar6,uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    lVar8 = *(long *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09184940 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Runtime_Serialization_FormatterServices__GetSerializableMembers
                      (uVar10,uVar3,uVar7,0);
    if (lVar8 == 0) goto LAB_074c00f0;
    puVar9 = (undefined8 *)(lVar8 + 0x28);
    *puVar9 = uVar3;
    thunk_FUN_03f5d7b8(puVar9,uVar3);
    lVar8 = *plVar6;
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) goto LAB_074c00f0;
    uVar1 = *(uint *)(*(long *)(lVar8 + 0x28) + 0x18);
    uVar3 = FUN_03f5c394(DAT_091805f8,uVar1);
    *(undefined8 *)(lVar8 + 0x30) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x30),uVar3);
    lVar8 = *plVar6;
    uVar3 = FUN_03f5c394(DAT_09180748,uVar1);
    if (lVar8 == 0) goto LAB_074c00f0;
    puVar9 = (undefined8 *)(lVar8 + 0x38);
    *puVar9 = uVar3;
    thunk_FUN_03f5d7b8(puVar9,uVar3);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      lVar8 = 0x20;
      do {
        lVar4 = *plVar6;
        if ((lVar4 == 0) || (lVar5 = *(long *)(lVar4 + 0x28), lVar5 == 0)) goto LAB_074c00f0;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) {
LAB_074c00f4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar2 = *(long **)(lVar5 + lVar8);
        if (plVar2 == (long *)0x0) goto LAB_074c00f0;
        lVar4 = *(long *)(lVar4 + 0x30);
        uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        if (lVar4 == 0) goto LAB_074c00f0;
        if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_074c00f4;
        *(undefined8 *)(lVar4 + lVar8) = uVar3;
        uVar3 = thunk_FUN_03f5d7b8(lVar4 + lVar8,uVar3);
        lVar4 = *plVar6;
        if ((lVar4 == 0) || (lVar5 = *(long *)(lVar4 + 0x28), lVar5 == 0)) goto LAB_074c00f0;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_074c00f4;
        plVar2 = *(long **)(lVar4 + 0x38);
        lVar4 = System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__GetMemberType
                          (uVar3,*(undefined8 *)(lVar5 + lVar8));
        if (plVar2 == (long *)0x0) goto LAB_074c00f0;
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
          uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,0);
        }
        if (*(uint *)(plVar2 + 3) <= uVar11) goto LAB_074c00f4;
        *(long *)((long)plVar2 + lVar8) = lVar4;
        thunk_FUN_03f5d7b8((long)plVar2 + lVar8,lVar4);
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 8;
      } while (uVar1 != uVar11);
    }
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (plVar2 = *(long **)(*(long *)(param_1 + 0x60) + 0x10), plVar2 == (long *)0x0))
    goto LAB_074c00f0;
    (**(code **)(*plVar2 + 0x2a8))
              (plVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(*plVar2 + 0x2b0));
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    if (*plVar6 == 0) {
LAB_074c00f0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = *(undefined8 *)(*plVar6 + 0x28);
    if (*(int *)(DAT_09184940 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Runtime_Serialization_FormatterServices__GetObjectData(lVar8,uVar3,0);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  *(undefined2 *)(param_1 + 0x29) = 0x101;
  return;
}

