// rea decompile_all
// name: AnhPD.FoodOrder.SpiderCleanerFx$$Catch
// address: 0x4245ad0
// body: available
// range: 0x4245ad0-0x4245d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4245cf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4245d44 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4245d6c to 0x4245d70 AnhPD.FoodOrder.SpiderCleanerFx$$Climb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SpiderCleanerFx__Catch(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_09516e6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b0240);
    FUN_03f5c2a4(&DAT_091b0248);
    FUN_03f5c2a4(&DAT_091ac700);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d9730);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    DAT_09516e6f = 1;
  }
  AnhPD_FoodOrder_SpiderCleanerFx__KillSeq(param_1);
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = DG_Tweening_DOTween__Sequence(0);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar1);
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    iVar7 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar5) {
        if (iVar7 != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x78);
          uVar1 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar1,param_1,DAT_091d9730,0);
          FUN_04d956bc(uVar6,uVar1,DAT_091dbd18);
          return;
        }
        AnhPD_FoodOrder_SpiderCleanerFx__KillSeq(param_1);
        AnhPD_FoodOrder_SpiderCleanerFx__Climb(param_1);
        return;
      }
      lVar2 = FUN_057e0998(lVar2,iVar5,DAT_091b0248);
      if (*(long *)(param_1 + 0x60) == 0) break;
      lVar3 = FUN_057e0998(*(long *)(param_1 + 0x60),iVar5,DAT_091ac700);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar2,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
        if ((uVar4 & 1) == 0) {
          if (lVar2 == 0) break;
        }
        else {
          if (lVar3 == 0) break;
          AnhPD_FoodOrder_DragItem__UnregisterCell(lVar3,0);
          uVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf(lVar3,0);
          DG_Tweening_ShortcutExtensions__DOKill(uVar1,0,0);
          lVar3 = UnityEngine_Component__get_transform(lVar3,0);
          if ((lVar2 == 0) || (uVar1 = UnityEngine_Component__get_transform(lVar2,0), lVar3 == 0))
          break;
          UnityEngine_Transform__SetParent(lVar3,uVar1,1,0);
        }
        uVar6 = *(undefined8 *)(param_1 + 0x78);
        uVar1 = SpiderWeb__CatchTween(*(undefined4 *)(param_1 + 0x50),lVar2,0);
        DG_Tweening_TweenSettingsExtensions__Insert(0,uVar6,uVar1,0);
        iVar7 = iVar7 + 1;
      }
      lVar2 = *(long *)(param_1 + 0x58);
      iVar5 = iVar5 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

