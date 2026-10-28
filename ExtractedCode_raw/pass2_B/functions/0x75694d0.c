// rea decompile_all
// name: System.IO.MemoryStream$$SetLength
// address: 0x75694d0
// body: available
// range: 0x75694d0-0x75695a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75695a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_MemoryStream__SetLength(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 >> 0x1f == 0) {
    System_IO_MemoryStream__EnsureWriteable();
    if ((long)param_2 <= (long)(int)(*(uint *)(param_1 + 0x30) ^ 0x7fffffff)) {
      iVar1 = *(uint *)(param_1 + 0x30) + (int)param_2;
      uVar3 = System_IO_MemoryStream__EnsureCapacity(param_1,iVar1);
      if ((uVar3 & 1) == 0) {
        iVar2 = *(int *)(param_1 + 0x38);
        if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
          System_Array__Clear(*(undefined8 *)(param_1 + 0x28),iVar2,iVar1 - iVar2,0);
        }
      }
      *(int *)(param_1 + 0x38) = iVar1;
      if (iVar1 < *(int *)(param_1 + 0x34)) {
        *(int *)(param_1 + 0x34) = iVar1;
      }
      return;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar4 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_09225370);
  uVar6 = thunk_FUN_03fc39d4(&DAT_0920dbd0);
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d30c0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

