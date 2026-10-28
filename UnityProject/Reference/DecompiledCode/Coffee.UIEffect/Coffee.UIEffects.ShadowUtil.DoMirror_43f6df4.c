// rea decompile_all
// name: Coffee.UIEffects.ShadowUtil$$DoMirror
// address: 0x43f6df4
// body: available
// range: 0x43f6df4-0x43f7023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f7020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_ShadowUtil__DoMirror
               (float param_1,float param_2,float param_3,float param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_1c4 [108];
  undefined1 auStack_158 [108];
  undefined1 auStack_ec [108];
  
  fVar8 = param_4;
  if ((DAT_09517e18 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918ab28);
    DAT_09517e18 = 1;
  }
  Coffee_UIEffects_UIVertexUtil__ExpandCapacity(param_5,2);
  fVar7 = 600.0;
  if (param_1 <= 600.0) {
    fVar7 = param_1;
  }
  fVar9 = -600.0;
  if (-600.0 <= param_1) {
    fVar9 = fVar7;
  }
  fVar6 = 600.0;
  if (param_2 <= 600.0) {
    fVar6 = param_2;
  }
  fVar10 = -600.0;
  if (-600.0 <= param_2) {
    fVar10 = fVar6;
  }
  if ((param_5 != 0) && (param_6 != 0)) {
    iVar1 = *(int *)(param_5 + 0x18);
    UnityEngine_RectTransform__get_rect(param_6,0);
    fVar6 = fVar7;
    UnityEngine_RectTransform__get_pivot(param_6,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Coffee_UIEffects_ShadowUtil__ApplyMirror
              (fVar9,fVar7,fVar8 + fVar7,param_3,fVar10 - fVar8 * (param_3 + 1.0) * fVar6,param_4,
               param_5,iVar1);
    iVar2 = *(int *)(param_5 + 0x18);
    if (0 < iVar2 - iVar1) {
      iVar4 = 0;
      lVar3 = DAT_0918ab28;
      do {
        lVar5 = **(long **)(lVar3 + 0xb8);
        if (lVar5 != 0) {
          FUN_05894708(auStack_158,param_5,iVar4,DAT_091b1750);
          memcpy(auStack_ec,auStack_158,0x6c);
          (**(code **)(lVar5 + 0x18))
                    (auStack_1c4,0x40800000,*(undefined8 *)(lVar5 + 0x40),auStack_ec,
                     *(undefined8 *)(lVar5 + 0x28));
          memcpy(auStack_ec,auStack_1c4,0x6c);
          FUN_0589476c(param_5,iVar4,auStack_ec,DAT_091b1760);
          iVar2 = *(int *)(param_5 + 0x18);
          lVar3 = DAT_0918ab28;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2 - iVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

