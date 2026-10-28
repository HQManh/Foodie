// rea decompile_all
// name: AnhPD.FoodOrder.SpiderCleanerFx$$Shoot
// address: 0x42457a8
// body: available
// range: 0x42457a8-0x4245acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4245a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4245a9c to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4245acc to 0x4245ad0 AnhPD.FoodOrder.SpiderCleanerFx$$Catch (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SpiderCleanerFx__Shoot
               (undefined1 param_1 [16],undefined4 param_2,undefined1 param_3 [16],long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  
  if ((DAT_09516e6e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b0240);
    FUN_03f5c2a4(&DAT_091b0248);
    FUN_03f5c2a4(&DAT_091ac700);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d9728);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    DAT_09516e6e = 1;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04245a48;
    CakeOrder_AudioManagerCakeOrder__PlaySfx
              (0x3f800000,**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_4 + 0x30),4,0);
  }
  AnhPD_FoodOrder_SpiderCleanerFx__KillSeq(param_4);
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = DG_Tweening_DOTween__Sequence(0);
  *(undefined8 *)(param_4 + 0x78) = uVar5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x78),uVar5);
  lVar2 = *(long *)(param_4 + 0x58);
  if (lVar2 != 0) {
    iVar7 = 0;
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        if (iVar7 != 0) {
          uVar6 = *(undefined8 *)(param_4 + 0x78);
          uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar5,param_4,DAT_091d9728,0);
          FUN_04d956bc(uVar6,uVar5,DAT_091dbd18);
          return;
        }
        AnhPD_FoodOrder_SpiderCleanerFx__KillSeq(param_4);
        AnhPD_FoodOrder_SpiderCleanerFx__Catch(param_4);
        return;
      }
      lVar2 = FUN_057e0998(lVar2,iVar4,DAT_091b0248);
      if (*(long *)(param_4 + 0x60) == 0) break;
      lVar3 = FUN_057e0998(*(long *)(param_4 + 0x60),iVar4,DAT_091ac700);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
        if ((uVar1 & 1) != 0) {
          if ((((lVar3 == 0) || (lVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(lVar3,0), lVar3 == 0))
              || (uVar8 = UnityEngine_Transform__get_position(lVar3,0), lVar2 == 0)) ||
             (lVar3 = UnityEngine_Component__get_transform(lVar2,0), lVar3 == 0)) break;
          UnityEngine_Transform__get_position(lVar3,0);
          uVar6 = *(undefined8 *)(param_4 + 0x78);
          fVar9 = *(float *)(param_4 + 0x4c);
          uVar5 = SpiderWeb__ShootTween
                            (uVar8,param_2,param_3,*(undefined4 *)(param_4 + 0x40),lVar2,0);
          DG_Tweening_TweenSettingsExtensions__Insert(fVar9 * (float)iVar4,uVar6,uVar5,0);
          iVar7 = iVar7 + 1;
        }
      }
      lVar2 = *(long *)(param_4 + 0x58);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
LAB_04245a48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

