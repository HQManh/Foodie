// rea decompile_all
// name: System.Security.Cryptography.SymmetricAlgorithm$$set_BlockSize
// address: 0x746d1ec
// body: available
// range: 0x746d1ec-0x746d2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746d2b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746d2e0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x746d2e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746d2e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SymmetricAlgorithm__set_BlockSize(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar5 == uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0746d2e4;
        iVar6 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x18) == 0) {
          if (iVar6 == param_2) {
LAB_0746d2cc:
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(int *)(param_1 + 0x10) = param_2;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
            return;
          }
        }
        else {
          for (; iVar6 <= *(int *)(lVar7 + 0x14); iVar6 = iVar6 + *(int *)(lVar7 + 0x18)) {
            if (param_2 == iVar6) {
              if (*(int *)(param_1 + 0x10) == param_2) {
                return;
              }
              goto LAB_0746d2cc;
            }
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)));
    }
    uVar2 = thunk_FUN_03fc39d4(&DAT_0920d628);
    uVar2 = System_Environment__GetResourceString(uVar2,0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar3 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar3,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091daa98);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
LAB_0746d2e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

