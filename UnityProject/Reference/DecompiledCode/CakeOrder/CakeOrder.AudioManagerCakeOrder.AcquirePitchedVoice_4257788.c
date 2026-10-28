// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$AcquirePitchedVoice
// address: 0x4257788
// body: available
// range: 0x4257788-0x4257ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4257aac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4257ab0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4257ab4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_AudioManagerCakeOrder__AcquirePitchedVoice(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_09516f22 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4f58);
    FUN_03f5c2a4(&DAT_091a4f60);
    FUN_03f5c2a4(&DAT_091a4f68);
    FUN_03f5c2a4(&DAT_091cd5c8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091b20b8);
    FUN_03f5c2a4(&DAT_091b20c0);
    FUN_03f5c2a4(&DAT_091b20c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918e658);
    FUN_03f5c2a4(&DAT_0920a870);
    DAT_09516f22 = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_04257ab4;
  FUN_057e185c(&local_68,*(long *)(param_1 + 0x138),DAT_091b20c0);
  local_40 = local_58;
  puStack_48 = puStack_60;
  local_50 = local_68;
  local_68 = 0;
  puStack_60 = &local_50;
  lVar4 = 0;
  while (lVar6 = lVar4, uVar3 = FUN_071bd28c(&local_50,DAT_091a4f60), lVar5 = local_40,
        (uVar3 & 1) != 0) {
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_40 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = UnityEngine_AudioSource__get_isPlaying(*(long *)(local_40 + 0x10),0);
    if ((uVar3 & 1) == 0) {
      FUN_071bd288(&local_50,DAT_091a4f58);
      return lVar5;
    }
    lVar4 = lVar5;
    if ((lVar6 != 0) && (lVar4 = lVar6, *(float *)(lVar5 + 0x20) < *(float *)(lVar6 + 0x20))) {
      lVar4 = lVar5;
    }
  }
  FUN_071bd288(&local_50,DAT_091a4f58);
  if (lVar6 != 0) {
    if (*(long *)(param_1 + 0x138) == 0) goto LAB_04257ab4;
    iVar1 = *(int *)(param_1 + 0x130);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    if (iVar1 <= *(int *)(*(long *)(param_1 + 0x138) + 0x18)) {
      return lVar6;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x140);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_09184b68);
    UnityEngine_GameObject___ctor(lVar4,DAT_0920a870,0);
    if (lVar4 == 0) goto LAB_04257ab4;
    uVar9 = UnityEngine_GameObject__get_transform(lVar4,0);
    *(undefined8 *)(param_1 + 0x140) = uVar9;
    thunk_FUN_03f5d7b8(param_1 + 0x140,uVar9);
    lVar4 = *(long *)(param_1 + 0x140);
    uVar9 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar4 == 0) goto LAB_04257ab4;
    UnityEngine_Transform__SetParent(lVar4,uVar9,0,0);
  }
  if (((*(long *)(param_1 + 0x140) != 0) &&
      (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x140),0), lVar4 != 0)) &&
     (lVar4 = FUN_04b7c294(lVar4,DAT_091cd5c8), lVar4 != 0)) {
    UnityEngine_AudioSource__set_playOnAwake(lVar4,0,0);
    UnityEngine_AudioSource__set_loop(lVar4,0,0);
    lVar5 = thunk_FUN_03f9944c(DAT_0918e658);
    *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
    System_Object___ctor(lVar5,0);
    *(long *)(lVar5 + 0x10) = lVar4;
    thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),lVar4);
    lVar4 = DAT_091b20b8;
    lVar6 = *(long *)(param_1 + 0x138);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *plVar8 = lVar5;
          thunk_FUN_03f5d7b8(plVar8,lVar5);
        }
        else {
          FUN_057e0c68(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                      );
        }
        return lVar5;
      }
    }
  }
LAB_04257ab4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

