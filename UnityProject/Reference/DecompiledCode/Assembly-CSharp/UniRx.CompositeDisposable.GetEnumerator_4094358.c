// rea decompile_all
// name: UniRx.CompositeDisposable$$GetEnumerator
// address: 0x4094358
// body: available
// range: 0x4094358-0x40945bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40945a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40945ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40945b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40945b8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40945bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04094520) */
/* WARNING: Removing unreachable block (ram,0x040945b4) */

void UniRx_CompositeDisposable__GetEnumerator(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_90;
  char *pcStack_88;
  undefined8 *local_80;
  long local_78;
  char *pcStack_70;
  undefined8 *local_68;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  char local_44 [4];
  undefined8 local_38;
  
  if ((DAT_09515d31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2f18);
    FUN_03f5c2a4(&DAT_091a2f20);
    FUN_03f5c2a4(&DAT_091a2f28);
    FUN_03f5c2a4(&DAT_09177388);
    FUN_03f5c2a4(&DAT_091ad1b0);
    FUN_03f5c2a4(&DAT_091ad1c8);
    FUN_03f5c2a4(&DAT_091ad198);
    FUN_03f5c2a4(&DAT_0917c300);
    DAT_09515d31 = 1;
  }
  local_38 = 0;
  local_44[0] = '\0';
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917c300);
  FUN_057e0400(lVar3,DAT_091ad198);
  local_38 = *(undefined8 *)(param_1 + 0x10);
  pcStack_70 = local_44;
  local_44[0] = '\0';
  local_78 = 0;
  local_68 = &local_38;
  System_Threading_Monitor__Enter(local_38,local_44,0);
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_90,*(long *)(param_1 + 0x20),DAT_091ad1c8);
  uStack_58 = pcStack_88;
  local_60 = local_90;
  local_50 = (long)local_80;
  pcStack_88 = (char *)&local_60;
  local_90 = 0;
  while( true ) {
    do {
      uVar4 = FUN_071bd28c(&local_60,DAT_091a2f20);
      lVar2 = DAT_091ad1b0;
      if ((uVar4 & 1) == 0) {
        FUN_071bd288(&local_60,DAT_091a2f18);
        if (*pcStack_70 != '\0') {
          System_Threading_Monitor__Exit(*local_68,0);
        }
        if (local_78 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548();
        }
        if (lVar3 != 0) {
          FUN_057e185c(&local_78,lVar3,DAT_091ad1c8);
          pcStack_88 = pcStack_70;
          local_90 = local_78;
          local_80 = local_68;
          FUN_03f5c42c(DAT_09177388,&local_90);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while (local_50 == 0);
    if (lVar3 == 0) break;
    lVar5 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = local_50;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar3,local_50,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

