// rea decompile_all
// name: System.TermInfoDriver$$SearchTerminfo
// address: 0x7608298
// body: available
// range: 0x7608298-0x76083ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76083f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76083fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_TermInfoDriver__SearchTerminfo(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_0952200c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ba00);
    FUN_03f5c2a4(&DAT_0920e378);
    DAT_0952200c = 1;
  }
  if (param_1 != 0) {
    uVar1 = System_String__op_Equality(param_1,**(undefined8 **)(DAT_09535468 + 0xb8),0);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    lVar2 = System_Environment__internalGetEnvironmentVariable(DAT_0920e378);
    if ((lVar2 != 0) && (uVar1 = System_IO_Directory__Exists(lVar2,0), (uVar1 & 1) != 0)) {
      if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = System_TermInfoDriver__TryTermInfoDir(lVar2,param_1);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(DAT_0918ba00 + 0xb8) + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar1 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar5 = *(undefined8 *)(lVar2 + 0x20 + uVar1 * 8);
        uVar4 = System_IO_Directory__Exists(uVar5,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_0918ba00 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = System_TermInfoDriver__TryTermInfoDir(uVar5,param_1);
          if (lVar3 != 0) {
            return lVar3;
          }
        }
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar1 = uVar1 + 1;
      } while ((long)uVar1 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
  }
  return 0;
}

