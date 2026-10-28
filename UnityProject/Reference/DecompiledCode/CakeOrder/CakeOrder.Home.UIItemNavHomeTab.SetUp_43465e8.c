// rea decompile_all
// name: CakeOrder.Home.UIItemNavHomeTab$$SetUp
// address: 0x43465e8
// body: available
// range: 0x43465e8-0x434689b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4346894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4346898 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemNavHomeTab__SetUp
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if ((DAT_0951776b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185158);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_0951776b = 1;
  }
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe0),param_2);
  *(undefined4 *)(param_1 + 200) = param_3;
  *(undefined4 *)(param_1 + 0xcc) = param_4;
  *(undefined8 *)(param_1 + 0xd0) = param_6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd0),param_6);
  *(undefined8 *)(param_1 + 0xd8) = param_7;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),param_7);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  plVar4 = (long *)0x0;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_04346894;
    plVar4 = (long *)UnityEngine_Transform__GetParent(*(long *)(param_1 + 0x80),0);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else if (*plVar4 != DAT_09189c98) {
      plVar4 = (long *)0x0;
    }
  }
  *(long *)(param_1 + 0xe8) = (long)plVar4;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xe8));
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  plVar4 = (long *)0x0;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_04346894;
    plVar4 = (long *)UnityEngine_Transform__GetParent(*(long *)(param_1 + 0x88),0);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else if (*plVar4 != DAT_09189c98) {
      plVar4 = (long *)0x0;
    }
  }
  *(long *)(param_1 + 0xf0) = (long)plVar4;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xf0));
  lVar7 = *(long *)(param_1 + 0xa0);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar7 + 0x20 + lVar8 * 8);
        if (lVar3 == 0) goto LAB_04346894;
        UnityEngine_UI_Image__set_sprite(lVar3,param_5,0);
        uVar1 = *(uint *)(lVar7 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    plVar4 = *(long **)(param_1 + 0xa8);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x558))(plVar4,param_7,*(undefined8 *)(*plVar4 + 0x560));
      plVar4 = *(long **)(param_1 + 0x98);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x558))(plVar4,param_6,*(undefined8 *)(*plVar4 + 0x560));
        plVar4 = *(long **)(param_1 + 0x70);
        if (*(int *)(param_1 + 0xcc) == 1) {
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
            plVar4 = *(long **)(param_1 + 0x78);
            if (plVar4 != (long *)0x0) {
              pcVar5 = *(code **)(*plVar4 + 0x178);
              uVar6 = *(undefined8 *)(*plVar4 + 0x180);
LAB_04346840:
              (*pcVar5)(plVar4,uVar6);
              local_68 = DAT_09185158;
              uStack_60 = 0xffffffffffffffff;
              local_58 = param_3;
              uVar6 = System_Enum__ToString(&local_68,0);
              *(undefined8 *)(param_1 + 0x48) = uVar6;
              thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar6);
              return;
            }
          }
        }
        else if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
          plVar4 = *(long **)(param_1 + 0x78);
          if (plVar4 != (long *)0x0) {
            pcVar5 = *(code **)(*plVar4 + 0x1a8);
            uVar6 = *(undefined8 *)(*plVar4 + 0x1b0);
            goto LAB_04346840;
          }
        }
      }
    }
  }
LAB_04346894:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

