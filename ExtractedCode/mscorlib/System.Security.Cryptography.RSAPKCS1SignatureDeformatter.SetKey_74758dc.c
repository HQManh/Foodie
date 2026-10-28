// rea decompile_all
// name: System.Security.Cryptography.RSAPKCS1SignatureDeformatter$$SetKey
// address: 0x74758dc
// body: available
// range: 0x74758dc-0x74759cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747597c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7475984 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74759cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RSAPKCS1SignatureDeformatter__SetKey(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0952120f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091899e8);
    DAT_0952120f = 1;
  }
  lVar2 = DAT_091899e8;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(DAT_091899e8 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == DAT_091899e8)) {
      *(long *)(param_1 + 0x10) = (long)param_2;
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),param_2);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2);
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_0921df98);
  System_ArgumentNullException___ctor(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d6e30);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

