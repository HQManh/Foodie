// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.PlateSkew$$Reset
// address: 0x41b96a8
// body: available
// range: 0x41b96a8-0x41b98c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b98c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b98c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_PlateSkew__Reset(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 *puStack_60;
  long *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long *local_40;
  
  if ((DAT_09516962 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4370);
    FUN_03f5c2a4(&DAT_091a4378);
    FUN_03f5c2a4(&DAT_091a4380);
    FUN_03f5c2a4(&DAT_091b0170);
    FUN_03f5c2a4(&DAT_091ac7e8);
    FUN_03f5c2a4(&DAT_091b0178);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_09516962 = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = (long *)0x0;
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_057e185c(&local_68,*(long *)(param_1 + 0xf8),DAT_091b0178);
    local_40 = local_58;
    puStack_48 = puStack_60;
    local_50 = local_68;
    local_68 = 0;
    puStack_60 = &local_50;
    while (uVar2 = FUN_071bd28c(&local_50,DAT_091a4378), (uVar2 & 1) != 0) {
      if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*local_40 + 0x188))(local_40,*(undefined8 *)(*local_40 + 400));
    }
    FUN_071bd288(&local_50,DAT_091a4370);
    lVar3 = UnityEngine_Component__get_transform(param_1,0);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    if (lVar3 != 0) {
      lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale
                (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar3,0);
      lVar3 = *(long *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0xd8) = 0;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        lVar3 = *(long *)(param_1 + 0xf8);
        if (lVar3 != 0) {
          iVar1 = *(int *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
          }
          uVar5 = *(undefined8 *)(param_1 + 0xb0);
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Datpt_Utilities__DoFadeListSpriteNew(0,0,uVar5,0,1,0);
          Datpt_Utilities__SetAlpha(0,*(undefined8 *)(param_1 + 0xa0),0);
          if ((*(long *)(param_1 + 0x98) != 0) &&
             (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x98),0), lVar3 != 0
             )) {
            UnityEngine_GameObject__SetActive(lVar3,0,0);
            *(undefined2 *)(param_1 + 0xe8) = 0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

