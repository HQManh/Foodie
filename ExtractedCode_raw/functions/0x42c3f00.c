// rea decompile_all
// name: CakeOrder.UI.UIBuildingRewardBubble$$Awake
// address: 0x42c3f00
// body: available
// range: 0x42c3f00-0x42c431b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c420c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c42f8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c42fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c4300 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c4304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c4308 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c430c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c4310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c4318 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042c4314) */

void CakeOrder_UI_UIBuildingRewardBubble__Awake(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_0951733b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c010);
    FUN_03f5c2a4(&DAT_091dc650);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_0951733b = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_042c4310;
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 0x100);
    uVar6 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar6,param_1,DAT_091dc650,0);
    if (lVar7 == 0) goto LAB_042c4310;
    UnityEngine_Events_UnityEvent__AddListener(lVar7,uVar6,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x40),0), lVar7 == 0))
    goto LAB_042c4310;
    UnityEngine_GameObject__SetActive(lVar7,0,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) != 0) {
        plVar2 = (long *)UnityEngine_Transform__GetEnumerator(*(long *)(param_1 + 0x38),0);
        do {
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar2;
          uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar1 != 0) {
            piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_042c4108;
              }
              uVar1 = uVar1 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_042c4108:
          uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
          if ((uVar1 & 1) == 0) {
            plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
            if (plVar2 == (long *)0x0) goto LAB_042c4298;
            lVar7 = *plVar2;
            uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar1 == 0) goto LAB_042c426c;
            piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_042c4254;
          }
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar2;
          uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar1 != 0) {
            piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                goto LAB_042c4170;
              }
              uVar1 = uVar1 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_042c4170:
          plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918c010 + 0x130)) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8)
              != DAT_0918c010)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar4);
          }
          lVar7 = UnityEngine_Object__GetName(plVar4,0);
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x40),0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar6,uVar6);
          }
          uVar1 = System_String__StartsWith(lVar7,uVar6,0);
          if ((uVar1 & 1) != 0) {
            lVar7 = UnityEngine_Component__get_gameObject(plVar4,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_GameObject__SetActive(lVar7,0,0);
          }
        } while( true );
      }
      goto LAB_042c4310;
    }
  }
  goto LAB_042c4298;
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar5 = piVar5 + 4;
    if (uVar1 == 0) break;
LAB_042c4254:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_042c4288;
    }
  }
LAB_042c426c:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_042c4288:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_042c4298:
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x30),0), lVar7 == 0)) {
LAB_042c4310:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar7,0,0);
  }
  return;
}

