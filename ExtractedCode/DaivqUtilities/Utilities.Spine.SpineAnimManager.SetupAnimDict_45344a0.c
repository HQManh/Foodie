// rea decompile_all
// name: Utilities.Spine.SpineAnimManager$$SetupAnimDict
// address: 0x45344a0
// body: available
// range: 0x45344a0-0x4534793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453476c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4534790 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_Spine_SpineAnimManager__SetupAnimDict(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  
  if ((DAT_09518663 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_0919c2e8);
    FUN_03f5c2a4(&DAT_0919c300);
    FUN_03f5c2a4(&DAT_091a0618);
    FUN_03f5c2a4(&DAT_0919c2f8);
    FUN_03f5c2a4(&DAT_091a0610);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919c2e0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_09175fb8);
    FUN_03f5c2a4(&DAT_09175fc0);
    FUN_03f5c2a4(&DAT_09176d88);
    DAT_09518663 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(lVar2,DAT_0919f978);
  plVar5 = (long *)(param_1 + 0x38);
  *plVar5 = lVar2;
  thunk_FUN_03f5d7b8(plVar5,lVar2);
  lVar2 = thunk_FUN_03f9944c(DAT_09175fb8);
  FUN_06fc96ac(lVar2,DAT_0919c2e0);
  plVar6 = (long *)(param_1 + 0x48);
  *plVar6 = lVar2;
  thunk_FUN_03f5d7b8(plVar6,lVar2);
  lVar2 = thunk_FUN_03f9944c(DAT_09176d88);
  FUN_0701a348(lVar2,DAT_091a0610);
  plVar7 = (long *)(param_1 + 0x40);
  *plVar7 = lVar2;
  thunk_FUN_03f5d7b8(plVar7,lVar2);
  lVar2 = thunk_FUN_03f9944c(DAT_09175fc0);
  FUN_0701a348(lVar2,DAT_0919c2f8);
  plVar8 = (long *)(param_1 + 0x50);
  *plVar8 = lVar2;
  thunk_FUN_03f5d7b8(plVar8,lVar2);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar9 = 0;
    do {
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar9) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar9) {
LAB_04534790:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar2 + (ulong)uVar9 * 0x10 + 0x28);
      if (lVar2 == 0) break;
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar1) {
        uVar4 = 0;
        puVar13 = (undefined8 *)(lVar2 + 0x28);
        do {
          if (uVar1 <= uVar4) goto LAB_04534790;
          lVar10 = puVar13[-1];
          if (lVar10 == 0) goto LAB_0453476c;
          uVar11 = *puVar13;
          lVar12 = *plVar5;
          lVar3 = Spine_Unity_AnimationReferenceAsset__get_Animation(lVar10,0);
          if ((lVar3 == 0) || (lVar12 == 0)) goto LAB_0453476c;
          FUN_06fca448(lVar12,*(undefined8 *)(lVar3 + 0x10),uVar9,DAT_0919f990);
          lVar12 = *plVar7;
          lVar3 = Spine_Unity_AnimationReferenceAsset__get_Animation(lVar10,0);
          if ((lVar3 == 0) || (lVar12 == 0)) goto LAB_0453476c;
          FUN_0701b0e0(lVar12,*(undefined8 *)(lVar3 + 0x10),lVar10,uVar11,DAT_091a0618);
          if (*plVar6 == 0) goto LAB_0453476c;
          FUN_06fca448(*plVar6,lVar10,uVar9,DAT_0919c2e8);
          if (*plVar8 == 0) goto LAB_0453476c;
          FUN_0701b0e0(*plVar8,lVar10,lVar10,uVar11,DAT_0919c300);
          uVar1 = *(uint *)(lVar2 + 0x18);
          uVar4 = uVar4 + 1;
          puVar13 = puVar13 + 2;
        } while ((int)uVar4 < (int)uVar1);
      }
      uVar9 = uVar9 + 1;
      lVar2 = *(long *)(param_1 + 0x30);
    } while (lVar2 != 0);
  }
LAB_0453476c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

