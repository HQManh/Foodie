// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotRunner$$Update
// address: 0x4176f78
// body: available
// range: 0x4176f78-0x41772e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41772e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotRunner__Update(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 local_60;
  undefined4 local_54;
  
  if ((DAT_095165fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_09182cf0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_0917dc80);
    FUN_03f5c2a4(&DAT_091f6c60);
    FUN_03f5c2a4(&DAT_09221ff8);
    FUN_03f5c2a4(&DAT_091fa730);
    FUN_03f5c2a4(&DAT_091f5d58);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091f6300);
    DAT_095165fc = 1;
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_InGame_CookingBotAutoRetry__EnsureTimeScale(0);
  AnhPD_FoodOrder_Autoplay_CookingBotRunner__TryAutoResume(param_1);
  if (((*(char *)(param_1 + 0x3b) != '\0') && (*(long *)(param_1 + 0x40) != 0)) &&
     (uVar2 = CookingGraph_CookingEstimatorBot__get_IsInitialized(*(long *)(param_1 + 0x40),0),
     (uVar2 & 1) != 0)) {
    AnhPD_FoodOrder_Autoplay_CookingBotRunner__TryDismissBlockingPopup(param_1);
    uVar2 = AnhPD_FoodOrder_Autoplay_CookingBotRunner__CanPlayNow(param_1);
    if (((uVar2 & 1) != 0) &&
       (fVar10 = (float)UnityEngine_Time__get_unscaledTime(0), *(float *)(param_1 + 0x60) <= fVar10)
       ) {
      fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
      fVar10 = 1.0;
      if (1.0 <= *(float *)(param_1 + 0x20)) {
        fVar10 = *(float *)(param_1 + 0x20);
      }
      *(float *)(param_1 + 0x60) = fVar11 + 1.0 / fVar10;
      if (*(long *)(param_1 + 0x40) == 0) {
LAB_041772e0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = CookingGraph_CookingEstimatorBot__Tick(*(long *)(param_1 + 0x40),0);
      if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x39) != '\0')) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_041772e0;
        lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0xa0);
        if (lVar9 != 0) {
          uVar8 = DAT_091f5700;
          if (*(int *)(lVar9 + 0x28) != *(int *)(lVar9 + 0x24)) {
            local_60 = CONCAT44(local_60._4_4_,*(int *)(lVar9 + 0x28));
            uVar8 = FUN_03f5c42c(DAT_09182cf0,&local_60);
            local_54 = *(undefined4 *)(lVar9 + 0x24);
            uVar5 = FUN_03f5c42c(DAT_09182cf0,&local_54);
            uVar8 = System_String__Format(DAT_091f6c60,uVar8,uVar5,0);
          }
          uVar5 = DAT_091fa730;
          local_60 = 0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            local_60 = 0;
            FUN_05c3078c(&local_60,*(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x10),DAT_091b6f98);
          }
          uVar3 = FUN_03f5c42c(DAT_0917dc80,&local_60);
          uVar4 = System_String__Format(uVar5,uVar3,0);
          local_54 = *(undefined4 *)(lVar9 + 0x18);
          uVar5 = FUN_03f5c42c(DAT_09535450,&local_54);
          uVar6 = System_String__Format(DAT_09221ff8,uVar5,0);
          uVar3 = DAT_091f5d58;
          uVar5 = DAT_091f5700;
          cVar1 = *(char *)(lVar9 + 0x1c);
          local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(lVar9 + 0x20));
          uVar7 = FUN_03f5c42c(DAT_09535420,&local_60);
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_041772e0;
          if (cVar1 != '\0') {
            uVar5 = uVar3;
          }
          local_54 = CookingGraph_CookingEstimatorBot__get_PendingPickCount
                               (*(long *)(param_1 + 0x40),0);
          uVar3 = FUN_03f5c42c(DAT_09535420,&local_54);
          uVar8 = System_String__Format(DAT_091f6300,uVar7,uVar3,uVar8,0);
          uVar8 = System_String__Concat(uVar4,uVar6,uVar5,uVar8,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__Log(uVar8,param_1,0);
        }
      }
    }
  }
  return;
}

