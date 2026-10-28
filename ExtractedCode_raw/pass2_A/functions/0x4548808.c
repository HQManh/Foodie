// rea decompile_all
// name: DG.Tweening.ShortcutExtensions$$DOBlendableColor
// address: 0x4548808
// body: available
// range: 0x4548808-0x45489fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45489f4 to 0x4d9642c FUN_04d9642c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45489f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_ShortcutExtensions__DOBlendableColor
               (float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = param_2;
  fVar7 = param_3;
  fVar8 = param_4;
  if ((DAT_09518749 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175df0);
    FUN_03f5c2a4(&DAT_09175e40);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cc018);
    FUN_03f5c2a4(&DAT_091dbf70);
    FUN_03f5c2a4(&DAT_091eff08);
    FUN_03f5c2a4(&DAT_091eff10);
    FUN_03f5c2a4(&DAT_09194738);
    DAT_09518749 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09194738);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 0x20);
    *plVar4 = param_6;
    thunk_FUN_03f5d7b8(plVar4,param_6);
    if (*plVar4 != 0) {
      fVar5 = (float)UnityEngine_Light__get_color(*plVar4,0);
      uVar2 = DAT_09175df0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      uVar2 = thunk_FUN_03f9944c(uVar2);
      FUN_06dfa9f0(uVar2,lVar1,DAT_091eff08,0);
      uVar3 = thunk_FUN_03f9944c(DAT_09175e40);
      FUN_06dfb8d4(uVar3,lVar1,DAT_091eff10,0);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = DG_Tweening_DOTween__To
                        (param_1 - fVar5,param_2 - fVar6,param_3 - fVar7,param_4 - fVar8,param_5,
                         uVar2,uVar3);
      uVar2 = FUN_04b26518(uVar2,DAT_091cc018);
      FUN_04d9642c(uVar2,*plVar4,DAT_091dbf70);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

