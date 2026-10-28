// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$ReconcilePending
// address: 0x440f8ec
// body: available
// range: 0x440f8ec-0x440fd6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440fd68 to 0x440d4b8 CookingGraph.CookingEstimatorBot$$Verbose (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x440fd6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingEstimatorBot__ReconcilePending(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_09517ee9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6410);
    FUN_03f5c2a4(&DAT_091ca8f0);
    FUN_03f5c2a4(&DAT_091cb3f8);
    FUN_03f5c2a4(&DAT_091cb5b0);
    FUN_03f5c2a4(&DAT_091784c0);
    FUN_03f5c2a4(&DAT_091784c8);
    FUN_03f5c2a4(&DAT_09179080);
    FUN_03f5c2a4(&DAT_091a86b0);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091b23c8);
    FUN_03f5c2a4(&DAT_091ab4d8);
    FUN_03f5c2a4(&DAT_091b23d0);
    FUN_03f5c2a4(&DAT_0917bd40);
    FUN_03f5c2a4(&DAT_0917e130);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091e6b68);
    FUN_03f5c2a4(&DAT_091e6b70);
    FUN_03f5c2a4(&DAT_091e6c18);
    FUN_03f5c2a4(&DAT_0918eef0);
    FUN_03f5c2a4(&DAT_0918eee0);
    FUN_03f5c2a4(&DAT_091fb320);
    DAT_09517ee9 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918eef0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 0x10);
    *plVar6 = param_2;
    thunk_FUN_03f5d7b8(plVar6,param_2);
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x18);
      if (iVar1 == 0) {
        return;
      }
      if (*plVar6 != 0) {
        lVar7 = *(long *)(*plVar6 + 0x30);
        if (lVar7 == 0) {
          lVar7 = thunk_FUN_03f9944c(DAT_0917bd40);
          FUN_057e0400(lVar7,DAT_091ab4d8);
        }
        if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar5 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
        lVar8 = puVar5[5];
        if (lVar8 == 0) {
          if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar5 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
          }
          uVar10 = *puVar5;
          lVar8 = thunk_FUN_03f9944c(DAT_091784c8);
          FUN_05322d94(lVar8,uVar10,DAT_091e6b68,0);
          plVar3 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x28);
          *plVar3 = lVar8;
          thunk_FUN_03f5d7b8(plVar3,lVar8);
        }
        uVar10 = FUN_04b0cafc(lVar7,lVar8,DAT_091cb3f8);
        uVar4 = thunk_FUN_03f9944c(DAT_091784c0);
        FUN_05324070(uVar4,0,DAT_091c6410,0);
        uVar10 = FUN_04afac50(uVar10,uVar4,DAT_091ca8f0);
        if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eee0);
        }
        puVar5 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
        lVar7 = puVar5[6];
        if (lVar7 == 0) {
          if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918eee0);
            puVar5 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
          }
          uVar4 = *puVar5;
          lVar7 = thunk_FUN_03f9944c(DAT_09179080);
          FUN_05322d94(lVar7,uVar4,DAT_091e6b70,0);
          plVar3 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x30);
          *plVar3 = lVar7;
          thunk_FUN_03f5d7b8(plVar3,lVar7);
        }
        uVar10 = FUN_04b0cafc(uVar10,lVar7,DAT_091cb5b0);
        if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918b378);
        }
        if (DAT_09516ea3 == '\0') {
          FUN_03f5c2a4(&DAT_0918b378);
          DAT_09516ea3 = '\x01';
        }
        if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10);
        uVar4 = thunk_FUN_03f9944c(DAT_09179ee0);
        FUN_053eb66c(uVar4,uVar10,uVar9,DAT_091a86b0);
        *(undefined8 *)(lVar2 + 0x18) = uVar4;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),uVar4);
        lVar7 = *(long *)(param_1 + 0x28);
        uVar10 = thunk_FUN_03f9944c(DAT_0917e130);
        FUN_05d78cfc(uVar10,lVar2,DAT_091e6c18,0);
        if (lVar7 != 0) {
          FUN_057e23b0(lVar7,uVar10,DAT_091b23c8);
          if (*(long *)(param_1 + 0x28) != 0) {
            if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) == iVar1) {
              return;
            }
            CookingGraph_CookingEstimatorBot__Verbose(param_1,4,DAT_091fb320,*plVar6,0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

