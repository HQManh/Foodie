// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$ShortStack
// address: 0x41f6d80
// body: available
// range: 0x41f6d80-0x41f6ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f6edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f6ee0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__ShortStack(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((DAT_09516bbc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b128);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f5ac8);
    DAT_09516bbc = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b128);
  System_Diagnostics_StackTrace___ctor(plVar1,2,0,0);
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (lVar2 != 0) {
      lVar2 = System_String__Split(lVar2,10,0,0);
      plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(plVar1,0);
      if (lVar2 != 0) {
        if (0 < *(int *)(lVar2 + 0x18)) {
          uVar6 = 0;
          do {
            if (plVar1 == (long *)0x0) goto LAB_041f6edc;
            lVar3 = System_Text_StringBuilder__Append(plVar1,DAT_091f5ac8,0);
            if (*(uint *)(lVar2 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar4 = *(long *)(lVar2 + 0x20 + uVar6 * 8);
            if ((lVar4 == 0) || (uVar5 = System_String__Trim(lVar4,0), lVar3 == 0))
            goto LAB_041f6edc;
            System_Text_StringBuilder__AppendLine(lVar3,uVar5,0);
            if (6 < uVar6) break;
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)*(int *)(lVar2 + 0x18));
        }
        if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x041f6ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
          return;
        }
      }
    }
  }
LAB_041f6edc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

