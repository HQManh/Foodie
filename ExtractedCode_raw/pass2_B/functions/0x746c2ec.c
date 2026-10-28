// rea decompile_all
// name: System.Security.Cryptography.SHA512Managed$$_EndHash
// address: 0x746c2ec
// body: available
// range: 0x746c2ec-0x746c477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746c470 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746c474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Security_Cryptography_SHA512Managed___EndHash(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  if ((DAT_095211cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_095211cf = 1;
  }
  uVar3 = FUN_03f5c394(DAT_0917fc88,0x40);
  uVar1 = *(uint *)(param_1 + 0x30) & 0x7f;
  iVar6 = 0x80;
  if (0x6f < uVar1) {
    iVar6 = 0x100;
  }
  iVar6 = iVar6 - uVar1;
  lVar4 = FUN_03f5c394(DAT_0917fc88,iVar6);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 != 0) {
      *(undefined1 *)(lVar4 + 0x20) = 0x80;
      if (iVar6 - 8U < uVar1) {
        uVar5 = *(ulong *)(param_1 + 0x30);
        uVar2 = (uint)(uVar5 >> 0x20);
        *(char *)(lVar4 + (ulong)(iVar6 - 8U) + 0x20) = (char)((uVar2 & 0x1fffffff) >> 0x15);
        if (iVar6 - 7U < uVar1) {
          *(char *)(lVar4 + (ulong)(iVar6 - 7U) + 0x20) = (char)((uVar2 & 0x1fffffff) >> 0xd);
          if (iVar6 - 6U < uVar1) {
            *(char *)(lVar4 + (ulong)(iVar6 - 6U) + 0x20) = (char)((uVar2 & 0x1fffffff) >> 5);
            if (iVar6 - 5U < uVar1) {
              *(char *)(lVar4 + (ulong)(iVar6 - 5U) + 0x20) =
                   (char)((uVar5 & 0x1fffffffffffffff) >> 0x1d);
              if (iVar6 - 4U < uVar1) {
                *(char *)(lVar4 + (ulong)(iVar6 - 4U) + 0x20) =
                     (char)((uVar5 & 0x1fffffffffffffff) >> 0x15);
                if (iVar6 - 3U < uVar1) {
                  *(char *)(lVar4 + (ulong)(iVar6 - 3U) + 0x20) =
                       (char)((uVar5 & 0x1fffffffffffffff) >> 0xd);
                  if (iVar6 - 2U < uVar1) {
                    *(char *)(lVar4 + (ulong)(iVar6 - 2U) + 0x20) =
                         (char)((uVar5 & 0x1fffffffffffffff) >> 5);
                    if (iVar6 - 1U < uVar1) {
                      *(char *)(lVar4 + (ulong)(iVar6 - 1U) + 0x20) = (char)(uVar5 << 3);
                      System_Security_Cryptography_SHA512Managed___HashData(param_1,lVar4,0);
                      System_Security_Cryptography_Utils__QuadWordToBigEndian
                                (uVar3,*(undefined8 *)(param_1 + 0x38),8);
                      *(undefined8 *)(param_1 + 0x18) = uVar3;
                      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
                      return uVar3;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

