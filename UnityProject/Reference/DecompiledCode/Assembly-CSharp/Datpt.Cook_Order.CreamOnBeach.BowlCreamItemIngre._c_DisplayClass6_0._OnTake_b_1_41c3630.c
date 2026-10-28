// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.BowlCreamItemIngre.<>c__DisplayClass6_0$$<OnTake>b__1
// address: 0x41c3630
// body: available
// range: 0x41c3630-0x41c388b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c3880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c3884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c3888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_CreamOnBeach_BowlCreamItemIngre_<>c__DisplayClass6_0__<OnTake>b__1
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  long local_38;
  
  if ((DAT_095169b8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2828);
    FUN_03f5c2a4(&DAT_091a2830);
    FUN_03f5c2a4(&DAT_091a2838);
    FUN_03f5c2a4(&DAT_091ac188);
    FUN_03f5c2a4(&DAT_091d96f0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091e64f8);
    DAT_095169b8 = 1;
  }
  puStack_48 = (undefined8 *)0x0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0xd0), lVar1 != 0)) {
    FUN_0574bbb8(&local_70,lVar1,DAT_091ac188);
    local_50 = local_70;
    local_70 = 0;
    puStack_48 = puStack_68;
    local_38 = lStack_58;
    local_40 = uStack_60;
    puStack_68 = &local_50;
    while (uVar2 = FUN_0719ab4c(&local_50,DAT_091a2830), (uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(*(long *)(param_1 + 0x18) + 0xd8) == (int)local_40) {
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(local_38,1,0);
      }
    }
    FUN_0719ab48(&local_50,DAT_091a2828);
    if (*(long *)(param_1 + 0x10) != 0) {
      Datpt_Cook_Order_IngredientItem__OnDespawn(*(long *)(param_1 + 0x10),0);
      lVar1 = Datpt_Cook_Order_SoundControl__get_Ins();
      if (lVar1 != 0) {
        FUN_04d59cfc(lVar1,1,0,DAT_091d96f0);
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar3 = Datpt_Cook_Order_ItemMovingBase__get_TF(*(long *)(param_1 + 0x18),0);
          if (DAT_09515cf3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515cf3 = '\x01';
          }
          uVar5 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
          fVar4 = (float)((ulong)uVar5 >> 0x20) * 0.1;
          uVar3 = DG_Tweening_ShortcutExtensions__DOPunchScale
                            (CONCAT44(fVar4,(float)uVar5 * 0.1),fVar4,
                             *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.1,0x3e4ccccd,
                             0x3f800000,uVar3,10,0);
          lVar1 = *(long *)(param_1 + 0x20);
          if (lVar1 == 0) {
            lVar1 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(lVar1,param_1,DAT_091e64f8,0);
            *(long *)(param_1 + 0x20) = lVar1;
            thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),lVar1);
          }
          FUN_04d956bc(uVar3,lVar1,DAT_091dbd28);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

