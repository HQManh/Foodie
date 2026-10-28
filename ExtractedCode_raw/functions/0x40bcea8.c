// rea decompile_all
// name: AnhPD.FoodOrder.ServePlate$$JumpToTarget
// address: 0x40bcea8
// body: available
// range: 0x40bcea8-0x40bd283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bd254 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40bd27c to 0x40bd28c AnhPD.FoodOrder.ServePlate$$OnArriveAtTarget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40bd280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServePlate__JumpToTarget
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09515f5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcf8);
    FUN_03f5c2a4(&DAT_091dbde0);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091efa10);
    FUN_03f5c2a4(&DAT_091efa18);
    FUN_03f5c2a4(&DAT_091efa20);
    FUN_03f5c2a4(&DAT_091efa28);
    FUN_03f5c2a4(&DAT_091943f0);
    DAT_09515f5f = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_091943f0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar9 = (undefined8 *)(lVar2 + 0x18);
    *puVar9 = param_5;
    thunk_FUN_03f5d7b8(puVar9,param_5);
    *(long *)(lVar2 + 0x30) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x30),param_4);
    puVar8 = (undefined8 *)(lVar2 + 0x38);
    *puVar8 = param_6;
    thunk_FUN_03f5d7b8(puVar8,param_6);
    puVar7 = (undefined8 *)(lVar2 + 0x40);
    *puVar7 = param_7;
    thunk_FUN_03f5d7b8(puVar7,param_7);
    if (*(long *)(param_4 + 0x28) != 0) {
      iVar1 = *(int *)(param_4 + 100);
      if (iVar1 < 0x1f) {
        iVar1 = 0x1e;
      }
      UnityEngine_Rendering_SortingGroup__set_sortingOrder(*(long *)(param_4 + 0x28),iVar1,0);
      uVar6 = *puVar9;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar3 & 1) == 0) {
        AnhPD_FoodOrder_ServePlate__OnArriveAtTarget(param_4,*puVar8,*puVar7);
        return;
      }
      *(undefined1 *)(param_4 + 0xb1) = 1;
      uVar6 = UnityEngine_Component__get_transform(param_4,0);
      DG_Tweening_ShortcutExtensions__DOKill(uVar6,0,0);
      lVar4 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar4 != 0) {
        fVar10 = (float)UnityEngine_Transform__get_position(lVar4,0);
        *(float *)(lVar2 + 0x20) = fVar10;
        *(float *)(lVar2 + 0x24) = param_2;
        *(undefined4 *)(lVar2 + 0x28) = param_3;
        *(undefined4 *)(lVar2 + 0x2c) = param_3;
        if (*(long *)(lVar2 + 0x18) != 0) {
          fVar12 = param_2;
          fVar11 = (float)UnityEngine_Transform__get_position(*(long *)(lVar2 + 0x18),0);
          if (DAT_09515fab == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09515fab = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar12 = SQRT((fVar10 - fVar11) * (fVar10 - fVar11) +
                        (param_2 - fVar12) * (param_2 - fVar12)) / 10.0;
          *(undefined4 *)(lVar2 + 0x10) = 0;
          fVar10 = 0.3;
          if (fVar12 <= 0.3) {
            fVar10 = fVar12;
          }
          fVar11 = 0.05;
          if (0.05 <= fVar12) {
            fVar11 = fVar10;
          }
          uVar6 = thunk_FUN_03f9944c(DAT_09175e18);
          FUN_06dfb188(uVar6,lVar2,DAT_091efa10,0);
          uVar5 = thunk_FUN_03f9944c(DAT_09175e68);
          FUN_06dfc2b4(uVar5,lVar2,DAT_091efa18,0);
          if (*(int *)(DAT_09183190 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = DG_Tweening_DOTween__To(0x3f800000,fVar11,uVar6,uVar5,0);
          uVar6 = FUN_04d95e8c(uVar6,1,DAT_091dbe80);
          uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar5,lVar2,DAT_091efa20,0);
          uVar6 = FUN_04d957f0(uVar6,uVar5,DAT_091dbde0);
          uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar5,lVar2,DAT_091efa28,0);
          FUN_04d956bc(uVar6,uVar5,DAT_091dbcf8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

