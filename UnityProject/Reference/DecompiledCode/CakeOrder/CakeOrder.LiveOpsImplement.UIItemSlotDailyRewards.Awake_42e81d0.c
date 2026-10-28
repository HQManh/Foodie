// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemSlotDailyRewards$$Awake
// address: 0x42e81d0
// body: available
// range: 0x42e81d0-0x42e849b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e8478 to 0x8674db4 UnityEngine.Events.UnityEvent$$AddListener (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e8494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e8498 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__Awake(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((DAT_09517467 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091c5728);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dccd0);
    FUN_03f5c2a4(&DAT_091dccd8);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_09221b50);
    FUN_03f5c2a4(&DAT_092070f0);
    DAT_09517467 = 1;
  }
  plVar1 = (long *)CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__get_CountdownTarget(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(plVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if ((plVar1 == (long *)0x0) || (lVar3 = FUN_04a6aa88(plVar1,DAT_091c5728), lVar3 == 0))
    goto LAB_042e8494;
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar2 = 0;
      uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar8 = *(long *)(lVar3 + 0x20 + uVar2 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Equality(lVar8,plVar1,0);
        if ((uVar7 & 1) == 0) {
          if ((lVar8 == 0) ||
             (plVar4 = (long *)System_Object__GetType(lVar8,0), plVar4 == (long *)0x0))
          goto LAB_042e8494;
          lVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
          if (lVar5 == 0) goto LAB_042e8494;
          uVar7 = System_String__Contains(lVar5,DAT_092070f0,0);
          if ((uVar7 & 1) != 0) {
            UnityEngine_Behaviour__set_enabled(lVar8,0,0);
          }
        }
        uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09221b50);
    (**(code **)(*plVar1 + 0x558))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0x560));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x100);
    uVar6 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar6,param_1,DAT_091dccd0,0);
    if (lVar3 != 0) {
      UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar6,0);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        UnityEngine_UI_Selectable__set_interactable(*(long *)(param_1 + 0x40),1,0);
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x100);
          uVar6 = thunk_FUN_03f9944c(DAT_0918c678);
          UnityEngine_Events_UnityAction___ctor(uVar6,param_1,DAT_091dccd8,0);
          if (lVar3 != 0) {
            UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar6,0);
            return;
          }
        }
      }
    }
  }
LAB_042e8494:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

