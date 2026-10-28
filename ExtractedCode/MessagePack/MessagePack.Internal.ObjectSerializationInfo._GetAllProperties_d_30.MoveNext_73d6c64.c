// rea decompile_all
// name: MessagePack.Internal.ObjectSerializationInfo.<GetAllProperties>d__30$$MoveNext
// address: 0x73d6c64
// body: available
// range: 0x73d6c64-0x73d6f7b inclusive
// range: 0x73d6fe4-0x73d6ff7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d6f5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d6f60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d6f64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d6f68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d6f6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d6f70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d6f74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d6f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d6ff4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073d6fe4) */

undefined8
MessagePack_Internal_ObjectSerializationInfo_<GetAllProperties>d__30__MoveNext(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_09520cea & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a6d8);
    FUN_03f5c2a4(&DAT_0917adb8);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09520cea = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar6 = *(int *)(param_1 + 0x48) + 1;
    *(uint *)(param_1 + 0x48) = uVar6;
  }
  else {
    if (iVar1 == 1) {
LAB_073d6da4:
      plVar2 = *(long **)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_073d6e08;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_073d6e08:
      uVar8 = (*(code *)*puVar4)(plVar2,puVar4[1]);
      if ((uVar8 & 1) != 0) {
        plVar2 = *(long **)(param_1 + 0x38);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar2;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917adb8) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_073d6f18;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917adb8,0);
LAB_073d6f18:
        uVar5 = (*(code *)*puVar4)(plVar2,puVar4[1]);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_03f5d7b8();
        uVar7 = 1;
        goto LAB_073d6f38;
      }
      MessagePack_Internal_ObjectSerializationInfo_<GetAllProperties>d__30__<>m__Finally1();
      *(undefined8 *)(param_1 + 0x38) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),0);
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      plVar2 = *(long **)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = (**(code **)(*plVar2 + 0x8a8))(plVar2,*(undefined8 *)(*plVar2 + 0x8b0));
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x28);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar2 + 0x8a8))(plVar2,*(undefined8 *)(*plVar2 + 0x8b0));
        plVar2 = (long *)MessagePack_Internal_ObjectSerializationInfo__GetAllProperties();
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar2;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917a6d8) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_073d6d84;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a6d8,0);
LAB_073d6d84:
        uVar5 = (*(code *)*puVar4)(plVar2,puVar4[1]);
        *(undefined8 *)(param_1 + 0x38) = uVar5;
        thunk_FUN_03f5d7b8();
        goto LAB_073d6da4;
      }
    }
    plVar2 = *(long **)(param_1 + 0x28);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = (**(code **)(*plVar2 + 0x868))(plVar2,0x36,*(undefined8 *)(*plVar2 + 0x870));
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    thunk_FUN_03f5d7b8();
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  plVar2 = (long *)(param_1 + 0x40);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar6) {
    *plVar2 = 0;
    thunk_FUN_03f5d7b8(plVar2,0);
    return 0;
  }
  if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar3 + (long)(int)uVar6 * 8 + 0x20);
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
  uVar7 = 2;
LAB_073d6f38:
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  return 1;
}

