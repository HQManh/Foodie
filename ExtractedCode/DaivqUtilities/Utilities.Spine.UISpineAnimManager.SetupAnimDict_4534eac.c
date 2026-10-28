// rea decompile_all
// name: Utilities.Spine.UISpineAnimManager$$SetupAnimDict
// address: 0x4534eac
// body: available
// range: 0x4534eac-0x453520b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45351e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4535208 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_Spine_UISpineAnimManager__SetupAnimDict(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  if ((DAT_0951866b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_091c5478);
    FUN_03f5c2a4(&DAT_0919c318);
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_0919c2e8);
    FUN_03f5c2a4(&DAT_091a06d8);
    FUN_03f5c2a4(&DAT_0919c310);
    FUN_03f5c2a4(&DAT_091a06d0);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919c2e0);
    FUN_03f5c2a4(&DAT_09176db8);
    FUN_03f5c2a4(&DAT_09175fc8);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_09175fb8);
    DAT_0951866b = 1;
  }
  uVar2 = FUN_04a6a14c(param_1,DAT_091c5478);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar2);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18));
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    thunk_FUN_03f5d7b8();
    lVar3 = thunk_FUN_03f9944c(DAT_09176b28);
    FUN_06fc96ac(lVar3,DAT_0919f978);
    plVar6 = (long *)(param_1 + 0x40);
    *plVar6 = lVar3;
    thunk_FUN_03f5d7b8(plVar6,lVar3);
    lVar3 = thunk_FUN_03f9944c(DAT_09175fb8);
    FUN_06fc96ac(lVar3,DAT_0919c2e0);
    plVar7 = (long *)(param_1 + 0x50);
    *plVar7 = lVar3;
    thunk_FUN_03f5d7b8(plVar7,lVar3);
    lVar3 = thunk_FUN_03f9944c(DAT_09176db8);
    FUN_07021694(lVar3,DAT_091a06d0);
    plVar8 = (long *)(param_1 + 0x48);
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
    lVar3 = thunk_FUN_03f9944c(DAT_09175fc8);
    FUN_07021694(lVar3,DAT_0919c310);
    plVar9 = (long *)(param_1 + 0x58);
    *plVar9 = lVar3;
    thunk_FUN_03f5d7b8(plVar9,lVar3);
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      uVar10 = 0;
      do {
        if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar10) {
          return;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar10) {
LAB_04535208:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar3 + (ulong)uVar10 * 0x10 + 0x28);
        if (lVar3 == 0) break;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar1) {
          uVar5 = 0;
          puVar13 = (undefined8 *)(lVar3 + 0x28);
          do {
            if (uVar1 <= uVar5) goto LAB_04535208;
            lVar11 = puVar13[-1];
            if (lVar11 == 0) goto LAB_045351e4;
            uVar2 = *puVar13;
            lVar12 = *plVar6;
            lVar4 = Spine_Unity_AnimationReferenceAsset__get_Animation(lVar11,0);
            if ((lVar4 == 0) || (lVar12 == 0)) goto LAB_045351e4;
            FUN_06fca448(lVar12,*(undefined8 *)(lVar4 + 0x10),uVar10,DAT_0919f990);
            lVar12 = *plVar8;
            lVar4 = Spine_Unity_AnimationReferenceAsset__get_Animation(lVar11,0);
            if ((lVar4 == 0) || (lVar12 == 0)) goto LAB_045351e4;
            FUN_0702242c(lVar12,*(undefined8 *)(lVar4 + 0x10),lVar11,uVar2,DAT_091a06d8);
            if (*plVar7 == 0) goto LAB_045351e4;
            FUN_06fca448(*plVar7,lVar11,uVar10,DAT_0919c2e8);
            if (*plVar9 == 0) goto LAB_045351e4;
            FUN_0702242c(*plVar9,lVar11,lVar11,uVar2,DAT_0919c318);
            uVar1 = *(uint *)(lVar3 + 0x18);
            uVar5 = uVar5 + 1;
            puVar13 = puVar13 + 2;
          } while ((int)uVar5 < (int)uVar1);
        }
        uVar10 = uVar10 + 1;
        lVar3 = *(long *)(param_1 + 0x30);
      } while (lVar3 != 0);
    }
  }
LAB_045351e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

