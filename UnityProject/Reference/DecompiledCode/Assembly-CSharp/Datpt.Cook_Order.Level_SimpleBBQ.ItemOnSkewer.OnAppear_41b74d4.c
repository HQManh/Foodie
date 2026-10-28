// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.ItemOnSkewer$$OnAppear
// address: 0x41b74d4
// body: available
// range: 0x41b74d4-0x41b7717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b7710 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41b7714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_ItemOnSkewer__OnAppear(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((DAT_0951694c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091ebe88);
    FUN_03f5c2a4(&DAT_09191ec8);
    DAT_0951694c = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191ec8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_2);
    Datpt_Cook_Order_Level_SimpleBBQ_ItemOnSkewer__OnSetUpSkewerStart(param_1);
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    if (lVar2 != 0) {
      lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale
                (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar2,0);
      lVar2 = UnityEngine_Component__get_transform(param_1,0);
      if (DAT_09515ed5 == '\0') {
        FUN_03f5c2a4(&DAT_091898c0);
        DAT_09515ed5 = '\x01';
      }
      if (lVar2 != 0) {
        puVar5 = *(undefined4 **)(DAT_091898c0 + 0xb8);
        UnityEngine_Transform__set_rotation(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar2,0);
        lVar2 = *(long *)(param_1 + 0x60);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar2 != 0) {
          puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
          UnityEngine_Transform__set_localScale(*puVar5,puVar5[1],puVar5[2],lVar2,0);
          uVar6 = *(undefined8 *)(param_1 + 0x60);
          if (DAT_09515cf3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515cf3 = '\x01';
          }
          fVar7 = *(float *)(param_1 + 0x68);
          lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
          uVar6 = DG_Tweening_ShortcutExtensions__DOScale
                            (*(float *)(lVar2 + 0xc) * fVar7,*(float *)(lVar2 + 0x10) * fVar7,
                             *(float *)(lVar2 + 0x14) * fVar7,0x3e4ccccd,uVar6,0);
          uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar3,lVar1,DAT_091ebe88,0);
          FUN_04d956bc(uVar6,uVar3,DAT_091dbd10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

