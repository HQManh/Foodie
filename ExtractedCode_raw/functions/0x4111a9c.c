// rea decompile_all
// name: AnhPD.FoodOrder.DragItemBase$$Rewind
// address: 0x4111a9c
// body: available
// range: 0x4111a9c-0x4111d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4111d98 to 0x4d9656c FUN_04d9656c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4111d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragItemBase__Rewind
               (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09516214 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183ce0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dc000);
    FUN_03f5c2a4(&DAT_091dc028);
    FUN_03f5c2a4(&DAT_091e9220);
    FUN_03f5c2a4(&DAT_09190230);
    DAT_09516214 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09190230);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_3);
    *(undefined8 *)(lVar1 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_4);
    fVar10 = *(float *)(param_3 + 0x60);
    lVar2 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
    if (lVar2 != 0) {
      fVar5 = (float)UnityEngine_Transform__get_position(lVar2,0);
      fVar6 = *(float *)(param_3 + 0x4c);
      fVar8 = *(float *)(param_3 + 0x50);
      if (DAT_09515fab == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515fab = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_2 = param_2 - fVar8;
      fVar5 = fVar5 - fVar6;
      fVar6 = 1.0;
      fVar5 = SQRT(fVar5 * fVar5 + param_2 * param_2);
      if (fVar5 < 1.0) {
        fVar6 = *(float *)(param_3 + 0x60);
        fVar10 = fVar5 * fVar6;
      }
      if (*(long *)(param_3 + 0x70) != 0) {
        fVar5 = (float)UnityEngine_Transform__get_position(*(long *)(param_3 + 0x70),0);
        fVar11 = *(float *)(param_3 + 0x4c);
        fVar8 = *(float *)(param_3 + 0x50);
        if (DAT_09515fab == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09515fab = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = *(undefined4 *)(param_3 + 0x4c);
        fVar9 = *(float *)(param_3 + 0x50);
        if (*(int *)(DAT_09183ce0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar5 = fVar5 - fVar11;
        fVar6 = fVar6 - fVar8;
        fVar8 = 0.1;
        if (0.2 <= SQRT(fVar5 * fVar5 + fVar6 * fVar6)) {
          fVar8 = fVar10;
        }
        uVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
        uVar3 = DG_Tweening_ShortcutExtensions__DOMove(uVar7,fVar9,fVar9 * 0.01,fVar8,uVar3,0,0);
        uVar3 = FUN_04d9656c(uVar3,1,DAT_091dc028);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091e9220,0);
        FUN_04d956bc(uVar3,uVar4,DAT_091dbd10);
        uVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
        uVar3 = DG_Tweening_ShortcutExtensions__DOScale
                          (*(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),
                           *(undefined4 *)(param_3 + 0x48),0x3e99999a,uVar3,0);
        FUN_04d9656c(uVar3,1,DAT_091dc028);
        uVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
        uVar3 = DG_Tweening_ShortcutExtensions__DORotate
                          (*(undefined4 *)(param_3 + 0x54),*(undefined4 *)(param_3 + 0x58),
                           *(undefined4 *)(param_3 + 0x5c),0x3e99999a,uVar3,0,0);
        FUN_04d9656c(uVar3,1,DAT_091dc000);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

