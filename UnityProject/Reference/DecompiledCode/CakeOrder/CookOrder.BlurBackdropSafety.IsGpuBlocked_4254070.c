// rea decompile_all
// name: CookOrder.BlurBackdropSafety$$IsGpuBlocked
// address: 0x4254070
// body: available
// range: 0x4254070-0x4254183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425417c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4254180 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookOrder_BlurBackdropSafety__IsGpuBlocked(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_09516f01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09220e78);
    DAT_09516f01 = 1;
  }
  lVar2 = CookOrder_BlurBackdropSafety__ReadRemoteString(DAT_09220e78);
  uVar3 = System_String__IsNullOrWhiteSpace(lVar2,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  lVar4 = UnityEngine_SystemInfo__GetGraphicsDeviceName(0);
  if (lVar4 == 0) {
    lVar4 = **(long **)(DAT_09535468 + 0xb8);
  }
  if (lVar2 != 0) {
    auVar7 = System_String__Split(lVar2,0x2c,0,0);
    lVar2 = auVar7._0_8_;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if ((int)uVar1 < 1) {
        return 0;
      }
      uVar6 = 0;
      while( true ) {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558(auVar7._0_8_,auVar7._8_8_);
        }
        lVar5 = *(long *)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar5 == 0) break;
        lVar5 = System_String__Trim(lVar5,0);
        auVar7._8_8_ = lVar5;
        auVar7._0_8_ = lVar5;
        if (lVar5 == 0) break;
        if (0 < *(int *)(lVar5 + 0x10)) {
          if (lVar4 == 0) break;
          auVar7 = System_String__IndexOf(lVar4,lVar5,5,0);
          if (-1 < auVar7._0_4_) {
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
        if ((int)uVar1 <= (int)uVar6) {
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

