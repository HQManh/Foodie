// rea decompile_all
// name: Datpt.Cook_Order.PocketBase$$OnMouseUp
// address: 0x41a6dd8
// body: available
// range: 0x41a6dd8-0x41a6fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a6fd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_PocketBase__OnMouseUp(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int local_34;
  
  if ((DAT_09516889 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d5e88);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_0918c980);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09516889 = 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    fVar4 = (float)UnityEngine_Time__get_time(0);
    fVar7 = *(float *)(param_1 + 0x98);
    fVar6 = *(float *)(param_1 + 0x9c);
    if (fVar7 <= fVar4 - fVar6) {
      lVar3 = *(long *)(param_1 + 0xb0);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 0xa8);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      }
      uVar1 = DAT_09535420;
      lVar3 = *(long *)(param_1 + 0x88);
      local_34 = *(int *)(param_1 + 0x94) + 1;
      *(int *)(param_1 + 0x94) = local_34;
      local_34 = *(int *)(param_1 + 0x84) - local_34;
      uVar1 = FUN_03f5c42c(uVar1,&local_34);
      uVar1 = System_String__Format(DAT_09226038,uVar1,0);
      if (lVar3 == 0) goto LAB_041a6fd0;
      UnityEngine_TextMesh__set_text(lVar3,uVar1,0);
      if (*(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x94)) {
        lVar3 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
        lVar2 = UnityEngine_Component__get_transform(param_1,0);
        if (lVar2 == 0) {
LAB_041a6fd0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = UnityEngine_Transform__get_position(lVar2,0);
        uVar1 = UnityEngine_Component__get_transform(param_1,0);
        if ((lVar3 == 0) ||
           (lVar3 = Datpt_Cook_Order_LevelControlCookOrder__SpawnEmojiControl
                              (uVar5,fVar6,fVar7,uVar1,uVar1), lVar3 == 0)) goto LAB_041a6fd0;
        Datpt_Cook_Order_EmojiControl__ShowPositive(0);
        uVar1 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar1,param_1,DAT_091d5e88,0);
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Datpt_Utilities__DelayedCallScaled(0x3f800000,uVar1,0);
      }
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}

