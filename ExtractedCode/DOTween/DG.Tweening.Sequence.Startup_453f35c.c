// rea decompile_all
// name: DG.Tweening.Sequence$$DoStartup
// address: 0x453f35c
// body: available
// range: 0x453f35c-0x453f35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 DG_Tweening_Sequence__DoStartup(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  if ((DAT_09518703 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aae48);
    FUN_03f5c2a4(&DAT_091b1158);
    FUN_03f5c2a4(&DAT_091aae50);
    FUN_03f5c2a4(&DAT_091b1160);
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_0918c140);
    DAT_09518703 = 1;
  }
  if (((param_1 != 0) && (*(long *)(param_1 + 0x128) != 0)) && (*(long *)(param_1 + 0x120) != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x128) + 0x18);
    if ((*(int *)(*(long *)(param_1 + 0x120) + 0x18) == 0 && iVar1 == 0) &&
       (uVar2 = DG_Tweening_Sequence__IsAnyCallbackSet(param_1), (uVar2 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x101) = 1;
      if (*(int *)(param_1 + 0xa4) < 0) {
        fVar8 = INFINITY;
      }
      else {
        fVar8 = *(float *)(param_1 + 0xa0) * (float)*(int *)(param_1 + 0xa4);
      }
      *(float *)(param_1 + 0x108) = fVar8;
      DG_Tweening_Sequence__StableSortSequencedObjs(*(undefined8 *)(param_1 + 0x128));
      if (*(char *)(param_1 + 0xb0) != '\0') {
        if (*(long *)(param_1 + 0x120) == 0) goto LAB_0453f59c;
        iVar7 = *(int *)(*(long *)(param_1 + 0x120) + 0x18);
        if (0 < iVar7) {
          iVar6 = 0;
          do {
            if (*(long *)(param_1 + 0x120) == 0) goto LAB_0453f59c;
            FUN_057e0998(*(long *)(param_1 + 0x120),iVar6,DAT_091b1160);
            if (*(char *)(param_1 + 0x99) == '\0') {
              if ((*(long *)(param_1 + 0x120) == 0) ||
                 (lVar3 = FUN_057e0998(*(long *)(param_1 + 0x120),iVar6,DAT_091b1160), lVar3 == 0))
              goto LAB_0453f59c;
              *(undefined1 *)(lVar3 + 0xb0) = 1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar7 != iVar6);
        }
      }
      uVar4 = 1;
      if ((*(char *)(param_1 + 0x2d) != '\0') && (0 < iVar1)) {
        iVar7 = 0;
        do {
          if ((*(long *)(param_1 + 0x128) == 0) ||
             (plVar5 = (long *)FUN_057e0998(*(long *)(param_1 + 0x128),iVar7,DAT_091aae50),
             plVar5 == (long *)0x0)) goto LAB_0453f59c;
          if ((int)plVar5[2] == 0) {
            if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918c140 + 0x130)) ||
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918c140 + 0x130) * 8 + -8
                         ) != DAT_0918c140)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar5);
            }
            fVar8 = *(float *)(plVar5 + 0x14);
            iVar6 = *(int *)((long)plVar5 + 0xa4);
            if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            DG_Tweening_Core_TweenManager__Goto(fVar8 * (float)iVar6,plVar5,0,3,0);
            *(undefined1 *)((long)plVar5 + 0x2d) = 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar1 != iVar7);
        uVar4 = 1;
      }
    }
    return uVar4;
  }
LAB_0453f59c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

