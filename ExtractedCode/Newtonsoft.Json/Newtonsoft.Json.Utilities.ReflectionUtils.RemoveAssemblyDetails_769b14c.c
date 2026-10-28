// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$RemoveAssemblyDetails
// address: 0x769b14c
// body: available
// range: 0x769b14c-0x769b2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769b2b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ReflectionUtils__RemoveAssemblyDetails(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  
  if ((DAT_095225e4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095225e4 = 1;
  }
  plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar6,0);
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar7 = 0;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      do {
        uVar5 = System_String__get_Chars(param_1,iVar7,0);
        uVar1 = uVar5 & 0xffff;
        if (uVar1 == 0x2c) {
          if (bVar2) {
            if (plVar6 != (long *)0x0) {
              bVar2 = true;
LAB_0769b26c:
              uVar5 = 0x2c;
              goto LAB_0769b270;
            }
            goto LAB_0769b2b0;
          }
          if (!bVar4) {
            if (plVar6 != (long *)0x0) {
              bVar2 = false;
              bVar4 = true;
              goto LAB_0769b26c;
            }
            goto LAB_0769b2b0;
          }
          bVar2 = false;
          bVar3 = true;
          bVar4 = true;
        }
        else {
          if (uVar1 == 0x5d) {
            if (plVar6 == (long *)0x0) goto LAB_0769b2b0;
            bVar2 = false;
            bVar3 = false;
            bVar4 = false;
            uVar5 = 0x5d;
          }
          else if (uVar1 == 0x5b) {
            if (plVar6 == (long *)0x0) goto LAB_0769b2b0;
            bVar3 = false;
            bVar4 = false;
            bVar2 = true;
            uVar5 = 0x5b;
          }
          else {
            if (bVar3) {
              bVar2 = false;
              bVar3 = true;
              goto LAB_0769b27c;
            }
            if (plVar6 == (long *)0x0) goto LAB_0769b2b0;
            bVar2 = false;
            bVar3 = false;
          }
LAB_0769b270:
          System_Text_StringBuilder__Append(plVar6,uVar5,0);
        }
LAB_0769b27c:
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0769b2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      return;
    }
  }
LAB_0769b2b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

