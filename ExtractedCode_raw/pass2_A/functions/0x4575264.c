// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$EvaluateTweenLink
// address: 0x4575264
// body: available
// range: 0x4575264-0x45754e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45754e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_TweenManager__EvaluateTweenLink(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long local_28;
  
  if ((DAT_095188dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0980);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188dd = 1;
  }
  local_28 = 0;
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x68);
  if (lVar5 != 0) {
    uVar6 = FUN_06fd9fbc(lVar5,param_1,&local_28,DAT_091a0980);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (local_28 == 0) goto LAB_045754e4;
    uVar7 = *(undefined8 *)(local_28 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar6 & 1) == 0) {
      if (((local_28 == 0) || (*(long *)(local_28 + 0x10) == 0)) ||
         (bVar4 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)(local_28 + 0x10),0),
         local_28 == 0)) goto LAB_045754e4;
      cVar2 = *(char *)(local_28 + 0x1c);
      iVar1 = *(int *)(local_28 + 0x18);
      *(byte *)(local_28 + 0x1c) = bVar4 & 1;
      bVar3 = cVar2 == '\0';
      if (iVar1 < 5) {
        if (1 < iVar1) {
          if (iVar1 == 2) {
            if (!bVar3 && (bVar4 & 1) == 0) goto LAB_04575490;
          }
          else {
            if (iVar1 == 3) {
LAB_045753f8:
              if ((bVar4 & bVar3) == 0) {
                return;
              }
              if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              DG_Tweening_Core_TweenManager__Play(param_1);
              return;
            }
            if (iVar1 != 4) {
              return;
            }
          }
          if ((bVar4 & bVar3) == 0) {
            return;
          }
          if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          DG_Tweening_Core_TweenManager__Restart(0xbf800000,param_1,1);
          return;
        }
        if (iVar1 == 0) {
          if (bVar3 || (bVar4 & 1) != 0) {
            return;
          }
          if (param_1 == 0) goto LAB_045754e4;
          if (*(char *)(param_1 + 0x110) == '\0') {
            return;
          }
        }
        else {
          if (iVar1 != 1) {
            return;
          }
          if (bVar3 || (bVar4 & 1) != 0) goto LAB_045753f8;
        }
LAB_04575490:
        if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        DG_Tweening_Core_TweenManager__Pause(param_1);
        return;
      }
      if (iVar1 < 8) {
        if (iVar1 != 5) {
          if (iVar1 != 7) {
            return;
          }
          if (bVar3 || (bVar4 & 1) != 0) {
            return;
          }
          if (param_1 != 0) {
            if (*(char *)(param_1 + 0x111) != '\0') {
              return;
            }
            DG_Tweening_TweenExtensions__Complete(param_1,0);
            return;
          }
          goto LAB_045754e4;
        }
        if ((bVar4 & 1) != 0) {
          return;
        }
      }
      else {
        if (iVar1 == 8) {
          if ((bVar4 & 1) != 0) {
            return;
          }
          if (param_1 == 0) goto LAB_045754e4;
          if (*(char *)(param_1 + 0x111) == '\0') {
            DG_Tweening_TweenExtensions__Complete(param_1,0);
          }
          goto LAB_04575330;
        }
        if (iVar1 == 9) {
          if (bVar3 || (bVar4 & 1) != 0) {
            return;
          }
          DG_Tweening_TweenExtensions__Rewind(param_1,0,0);
          return;
        }
        if (iVar1 != 10) {
          return;
        }
        if ((bVar4 & 1) != 0) {
          return;
        }
        DG_Tweening_TweenExtensions__Rewind(param_1,0,0);
      }
    }
    if (param_1 != 0) {
LAB_04575330:
      *(undefined1 *)(param_1 + 0xe8) = 0;
      return;
    }
  }
LAB_045754e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

