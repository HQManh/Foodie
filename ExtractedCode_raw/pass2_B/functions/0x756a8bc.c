// rea decompile_all
// name: System.IO.PathInternal$$GetIsCaseSensitive
// address: 0x756a8bc
// body: available
// range: 0x756a8bc-0x756aaab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756aaa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756aaa8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0756aa78) */
/* WARNING: Removing unreachable block (ram,0x0756aaa4) */

uint System_IO_PathInternal__GetIsCaseSensitive(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 local_40 [16];
  
  if ((DAT_09521a0a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091fd0c0);
    FUN_03f5c2a4(&DAT_092083a8);
    DAT_09521a0a = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_IO_Path__GetTempPath(0);
  local_40 = System_Guid__NewGuid(0);
  uVar3 = System_Guid__ToString(local_40,DAT_092083a8,0);
  uVar3 = System_String__Concat(DAT_091fd0c0,uVar3,0);
  lVar4 = System_IO_Path__Combine(uVar2,uVar3,0);
  plVar5 = (long *)thunk_FUN_03f9944c(DAT_09184580);
  System_IO_FileStream___ctor(plVar5,lVar4,1,3,0,0x1000,0x4000000,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_String__ToLowerInvariant(lVar4,0);
  uVar1 = System_IO_File__Exists(uVar2,0);
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0756aa64;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_0756aa64:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return (uVar1 ^ 1) & 1;
}

