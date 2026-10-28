// rea decompile_all
// name: DG.Tweening.Sequence$$DoInsert
// address: 0x453ec40
// body: available
// range: 0x453ec40-0x453ee7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453ee7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_Sequence__DoInsert(float param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_095186fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aae30);
    FUN_03f5c2a4(&DAT_091b1128);
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_0920d6e8);
    FUN_03f5c2a4(&DAT_09204ad8);
    DAT_095186fd = 1;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  DG_Tweening_Core_TweenManager__AddActiveTweenToSequence(param_3,0);
  if ((param_3 != 0) && (param_2 != 0)) {
    *(long *)(param_3 + 0xf0) = param_2;
    param_1 = *(float *)(param_3 + 0xac) + param_1;
    *(undefined1 *)(param_3 + 0x100) = 1;
    *(undefined1 *)(param_3 + 0xe9) = 1;
    *(float *)(param_2 + 0x130) = param_1;
    thunk_FUN_03f5d7b8((long *)(param_3 + 0xf0),param_2);
    iVar4 = *(int *)(param_3 + 0xa4);
    if (iVar4 == -1) {
      *(undefined4 *)(param_3 + 0xa4) = 0x7fffffff;
      DG_Tweening_Core_Debugger__LogWarning(DAT_09204ad8,param_3,0);
      iVar4 = *(int *)(param_3 + 0xa4);
    }
    fVar7 = *(float *)(param_3 + 0xa0);
    *(undefined1 *)(param_3 + 0x9c) = 0;
    *(undefined4 *)(param_3 + 0x114) = 0;
    *(undefined4 *)(param_3 + 0xac) = 0;
    *(undefined1 *)(param_3 + 0x118) = 1;
    if (*(char *)(param_3 + 0x9b) != '\0') {
      *(undefined1 *)(param_3 + 0x9b) = 0;
      DG_Tweening_Core_Debugger__LogWarning(DAT_0920d6e8,param_3,0);
    }
    fVar7 = param_1 + fVar7 * (float)iVar4;
    fVar8 = *(float *)(param_2 + 0xa0);
    *(float *)(param_3 + 0x14) = param_1;
    *(float *)(param_3 + 0x18) = fVar7;
    if (fVar8 < fVar7) {
      *(float *)(param_2 + 0xa0) = fVar7;
    }
    lVar2 = DAT_091aae30;
    lVar3 = *(long *)(param_2 + 0x128);
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = param_3;
          thunk_FUN_03f5d7b8(plVar6,param_3);
        }
        else {
          FUN_057e0c68(lVar3,param_3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        lVar2 = DAT_091b1128;
        lVar3 = *(long *)(param_2 + 0x120);
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = param_3;
              thunk_FUN_03f5d7b8(plVar6,param_3);
            }
            else {
              FUN_057e0c68(lVar3,param_3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            return param_2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

