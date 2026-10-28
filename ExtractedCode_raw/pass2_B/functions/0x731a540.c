// rea decompile_all
// name: IapAdsSystem.InAppManager$$ShowFakePurchasePopup
// address: 0x731a540
// body: available
// range: 0x731a540-0x731a9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731a9bc to 0x731aa64 IapAdsSystem.InAppManager$$SetFakePurchaseInteractionBlocked (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731a9c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_InAppManager__ShowFakePurchasePopup(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_09520563 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091748e0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a0398);
    FUN_03f5c2a4(&DAT_091a03a0);
    FUN_03f5c2a4(&DAT_091a03b8);
    FUN_03f5c2a4(&DAT_09191610);
    FUN_03f5c2a4(&DAT_091b3018);
    FUN_03f5c2a4(&DAT_091b3020);
    FUN_03f5c2a4(&DAT_0917e1c8);
    FUN_03f5c2a4(&DAT_09191618);
    FUN_03f5c2a4(&DAT_091eb498);
    FUN_03f5c2a4(&DAT_091915f8);
    FUN_03f5c2a4(&DAT_091eb4a0);
    FUN_03f5c2a4(&DAT_09191600);
    FUN_03f5c2a4(&DAT_092027f8);
    DAT_09520563 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_091915f8);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar7 = (long *)(lVar2 + 0x10);
    *plVar7 = param_3;
    thunk_FUN_03f5d7b8(plVar7,param_3);
    plVar8 = (long *)(lVar2 + 0x18);
    *plVar8 = param_2;
    thunk_FUN_03f5d7b8(plVar8,param_2);
    uVar3 = System_String__Concat(DAT_092027f8,*plVar8,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar3,0);
    plVar4 = (long *)*plVar8;
    if (plVar4 != (long *)0x0) {
      lVar9 = *(long *)(param_1 + 0x50);
      uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      if (lVar9 != 0) {
        uVar5 = FUN_06fd8648(lVar9,uVar3,DAT_091a03a0);
        if ((uVar5 & 1) == 0) {
          plVar4 = (long *)*plVar8;
          if (plVar4 == (long *)0x0) goto LAB_0731a9c0;
          lVar10 = *(long *)(param_1 + 0x50);
          uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          lVar9 = thunk_FUN_03f9944c(DAT_09191618);
          System_Object___ctor(lVar9,0);
          if (lVar9 == 0) goto LAB_0731a9c0;
          *(long *)(lVar9 + 0x10) = *plVar8;
          thunk_FUN_03f5d7b8();
          *(long *)(lVar9 + 0x18) = *plVar7;
          thunk_FUN_03f5d7b8();
          if (lVar10 == 0) goto LAB_0731a9c0;
          FUN_06fd8454(lVar10,uVar3,lVar9,DAT_091a0398);
        }
        else if (*plVar7 != 0) {
          lVar9 = thunk_FUN_03f9944c(DAT_09191600);
          System_Object___ctor(lVar9,0);
          if (lVar9 == 0) goto LAB_0731a9c0;
          plVar4 = (long *)(lVar9 + 0x18);
          *plVar4 = lVar2;
          thunk_FUN_03f5d7b8(plVar4,lVar2);
          if ((*plVar4 == 0) || (plVar4 = *(long **)(*plVar4 + 0x18), plVar4 == (long *)0x0))
          goto LAB_0731a9c0;
          lVar10 = *(long *)(param_1 + 0x50);
          uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          if (lVar10 == 0) goto LAB_0731a9c0;
          lVar10 = FUN_06fd83d4(lVar10,uVar3,DAT_091a03b8);
          if (lVar10 == 0) goto LAB_0731a9c0;
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
          thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x10));
          if ((*(long *)(lVar9 + 0x18) == 0) ||
             (plVar4 = *(long **)(*(long *)(lVar9 + 0x18) + 0x18), plVar4 == (long *)0x0))
          goto LAB_0731a9c0;
          lVar10 = *(long *)(param_1 + 0x50);
          uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          if (lVar10 == 0) goto LAB_0731a9c0;
          lVar10 = FUN_06fd83d4(lVar10,uVar3,DAT_091a03b8);
          uVar3 = thunk_FUN_03f9944c(DAT_091748e0);
          FUN_070a8c30(uVar3,lVar9,DAT_091eb4a0,0);
          if (lVar10 == 0) goto LAB_0731a9c0;
          *(undefined8 *)(lVar10 + 0x18) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x18),uVar3);
        }
        lVar9 = *(long *)(param_1 + 0x60);
        if (lVar9 != 0) {
          (**(code **)(lVar9 + 0x18))
                    (*(undefined8 *)(lVar9 + 0x40),*plVar8,*(undefined8 *)(lVar9 + 0x28));
        }
        lVar9 = *(long *)(param_1 + 0xb0);
        uVar3 = thunk_FUN_03f9944c(DAT_0917e1c8);
        FUN_05d78cfc(uVar3,lVar2,DAT_091eb498,0);
        if (lVar9 != 0) {
          uVar5 = FUN_057e1304(lVar9,uVar3,DAT_091b3020);
          if ((uVar5 & 1) != 0) {
            return;
          }
          lVar9 = *(long *)(param_1 + 0xb0);
          lVar2 = thunk_FUN_03f9944c(DAT_09191610);
          System_Object___ctor(lVar2,0);
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x10) = *plVar8;
            thunk_FUN_03f5d7b8();
            *(long *)(lVar2 + 0x18) = *plVar7;
            thunk_FUN_03f5d7b8();
            lVar10 = DAT_091b3018;
            if (lVar9 != 0) {
              lVar6 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar7 = lVar2;
                  thunk_FUN_03f5d7b8(plVar7,lVar2);
                }
                else {
                  FUN_057e0c68(lVar9,lVar2,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                IapAdsSystem_InAppManager__SetFakePurchaseInteractionBlocked(param_1,1);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0731a9c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

