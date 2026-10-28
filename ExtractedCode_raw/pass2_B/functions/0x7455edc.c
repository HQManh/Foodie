// rea decompile_all
// name: System.Security.SecurityElement$$Escape
// address: 0x7455edc
// body: available
// range: 0x7455edc-0x74560e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74560e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Security_SecurityElement__Escape(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_0952111d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a7f0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f72f0);
    FUN_03f5c2a4(&DAT_091f7300);
    FUN_03f5c2a4(&DAT_091f7318);
    FUN_03f5c2a4(&DAT_091f72f8);
    FUN_03f5c2a4(&DAT_091f7310);
    DAT_0952111d = 1;
  }
  if (param_1 != 0) {
    if (*(int *)(DAT_0918a7f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_String__IndexOfAny
                      (param_1,*(undefined8 *)(*(long *)(DAT_0918a7f0 + 0xb8) + 0x20),0);
    if (iVar2 != -1) {
      plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(plVar4,0);
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 < 1) {
        if (plVar4 == (long *)0x0) {
LAB_074560e0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        iVar7 = 0;
        do {
          uVar3 = System_String__get_Chars(param_1,iVar7,0);
          uVar1 = uVar3 & 0xffff;
          if (uVar1 < 0x27) {
            uVar6 = DAT_091f7318;
            if ((uVar1 != 0x22) && (uVar6 = DAT_091f72f0, uVar1 != 0x26)) goto LAB_0745604c;
            if (plVar4 == (long *)0x0) goto LAB_074560e0;
LAB_07456080:
            System_Text_StringBuilder__Append(plVar4,uVar6,0);
          }
          else {
            uVar6 = DAT_091f72f8;
            if (((uVar1 == 0x27) || (uVar6 = DAT_091f7300, uVar1 == 0x3e)) ||
               (uVar6 = DAT_091f7310, uVar1 == 0x3c)) {
              if (plVar4 != (long *)0x0) goto LAB_07456080;
              goto LAB_074560e0;
            }
LAB_0745604c:
            if (plVar4 == (long *)0x0) goto LAB_074560e0;
            System_Text_StringBuilder__Append(plVar4,uVar3,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar2 != iVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x074560dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return lVar5;
    }
  }
  return param_1;
}

