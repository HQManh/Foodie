// rea decompile_all
// name: Coffee.UIParticleInternal.FrameCache$$ClearAllCache
// address: 0x43fc0dc
// body: available
// range: 0x43fc0dc-0x43fc267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fc260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43fc264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIParticleInternal_FrameCache__ClearAllCache(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_09517e40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0f60);
    FUN_03f5c2a4(&DAT_091a6be8);
    FUN_03f5c2a4(&DAT_091a6bf0);
    FUN_03f5c2a4(&DAT_091a6bf8);
    FUN_03f5c2a4(&DAT_09184990);
    FUN_03f5c2a4(&DAT_09190bb0);
    FUN_03f5c2a4(&DAT_091bea88);
    DAT_09517e40 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if (*(int *)(DAT_09184990 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(long **)(DAT_09184990 + 0xb8) == 0) ||
     (lVar2 = FUN_06fd8278(**(long **)(DAT_09184990 + 0xb8),DAT_091a0f60), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_06544014(&local_48,lVar2,DAT_091bea88);
  do {
    uVar3 = FUN_072759a8(&local_48,DAT_091a6bf0);
    plVar1 = local_38;
    if ((uVar3 & 1) == 0) {
      FUN_072759a4(&local_48,DAT_091a6be8);
      return;
    }
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *local_38;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09190bb0) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_043fc230;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_38,DAT_09190bb0,0);
LAB_043fc230:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  } while( true );
}

