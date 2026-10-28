// rea decompile_all
// name: Datpt.Utilities$$DoFadeListSpriteNew
// address: 0x41993b8
// body: available
// range: 0x41993b8-0x41997c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41997b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41997bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41997c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Utilities__DoFadeListSpriteNew
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 local_78;
  
  if ((DAT_095167f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0919c0a8);
    FUN_03f5c2a4(&DAT_0919c0b0);
    FUN_03f5c2a4(&DAT_0919c0b8);
    FUN_03f5c2a4(&DAT_091a44a8);
    FUN_03f5c2a4(&DAT_091a44b0);
    FUN_03f5c2a4(&DAT_091a44b8);
    FUN_03f5c2a4(&DAT_091b0410);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091f2148);
    FUN_03f5c2a4(&DAT_09195c90);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095167f7 = 1;
  }
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_09195c90);
  Datpt_Utilities_<>c__DisplayClass35_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_4);
    plVar7 = (long *)(lVar1 + 0x18);
    *plVar7 = param_3;
    thunk_FUN_03f5d7b8(plVar7,param_3);
    if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x28);
    if (lVar2 != 0) {
      uVar3 = FUN_06fd9fbc(lVar2,*plVar7,&local_78,DAT_0919c0b0);
      if ((uVar3 & 1) != 0) {
        DG_Tweening_TweenExtensions__Kill(local_78,0,0);
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x28);
        if (lVar2 == 0) goto LAB_041997c0;
        FUN_06fd9970(lVar2,*plVar7,DAT_0919c0a8);
      }
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x30);
      if (lVar2 != 0) {
        uVar3 = FUN_06fd9fbc(lVar2,*plVar7,&local_80,DAT_0919c0b0);
        if ((uVar3 & 1) != 0) {
          DG_Tweening_TweenExtensions__Kill(local_80,0,0);
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x30);
          if (lVar2 == 0) goto LAB_041997c0;
          FUN_06fd9970(lVar2,*plVar7,DAT_0919c0a8);
        }
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = DG_Tweening_DOTween__Sequence(0);
        if (*plVar7 != 0) {
          FUN_057e185c(&local_b8,*plVar7,DAT_091b0410);
          local_90 = local_a8;
          puStack_98 = puStack_b0;
          local_a0 = local_b8;
          local_b8 = 0;
          puStack_b0 = &local_a0;
          while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a44b0), lVar2 = local_90, (uVar3 & 1) != 0) {
            if ((param_5 & 1) == 0) {
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = UnityEngine_Component__get_gameObject(local_90,0);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar6,0);
              if ((uVar3 & 1) != 0) {
                if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar5 = Datpt_Utilities__DoFadeSpriteReturnTween(param_1,param_2,lVar2,0);
                DG_Tweening_TweenSettingsExtensions__Join(uVar4,uVar5,0);
              }
            }
            else {
              if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = Datpt_Utilities__DoFadeSpriteReturnTween(param_1,param_2,lVar2,0);
              DG_Tweening_TweenSettingsExtensions__Join(uVar4,uVar5,0);
            }
          }
          FUN_071bd288(&local_a0,DAT_091a44a8);
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar2 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x28);
          if (lVar2 != 0) {
            FUN_06fd8440(lVar2,*(undefined8 *)(lVar1 + 0x18),uVar4,DAT_0919c0b8);
            uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091f2148,0);
            uVar4 = Datpt_Utilities__DelayedCallScaled(param_2,uVar4);
            lVar1 = *(long *)(*(long *)(DAT_0918c980 + 0xb8) + 0x30);
            if (lVar1 != 0) {
              FUN_06fd8440(lVar1,*plVar7,uVar4,DAT_0919c0b8);
              return;
            }
          }
        }
      }
    }
  }
LAB_041997c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

