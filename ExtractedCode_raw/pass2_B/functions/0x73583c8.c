// rea decompile_all
// name: MessagePack.GeneratedMessagePackResolver.GeneratedMessagePackResolverGetFormatterHelper$$GetFormatter
// address: 0x73583c8
// body: available
// range: 0x73583c8-0x7358637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7358634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_GeneratedMessagePackResolver_GeneratedMessagePackResolverGetFormatterHelper__GetFormatter
          (undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int local_24;
  
  if ((DAT_095207ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197128);
    FUN_03f5c2a4(&DAT_09175000);
    FUN_03f5c2a4(&DAT_0919c020);
    FUN_03f5c2a4(&DAT_0919c030);
    FUN_03f5c2a4(&DAT_0919c038);
    FUN_03f5c2a4(&DAT_0919c028);
    FUN_03f5c2a4(&DAT_09175ef0);
    FUN_03f5c2a4(&DAT_09175ef8);
    FUN_03f5c2a4(&DAT_09175f00);
    FUN_03f5c2a4(&DAT_09175ee8);
    FUN_03f5c2a4(&DAT_091a0cb0);
    FUN_03f5c2a4(&DAT_09190d20);
    FUN_03f5c2a4(&DAT_09196f28);
    FUN_03f5c2a4(&DAT_09196f30);
    DAT_095207ef = 1;
  }
  local_24 = 0;
  if (*(int *)(DAT_09190d20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09190d20 + 0xb8) != 0) {
    uVar1 = FUN_06fcbf70(**(long **)(DAT_09190d20 + 0xb8),param_1,&local_24,DAT_091a0cb0);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if (local_24 < 3) {
        if (local_24 == 0) {
          uVar3 = thunk_FUN_03f9944c(DAT_09175000);
          FUN_050b3158(uVar3,DAT_09197128);
        }
        else if (local_24 == 1) {
          uVar3 = thunk_FUN_03f9944c(DAT_09175f00);
          FUN_06e27450(uVar3,DAT_0919c038);
        }
        else if (local_24 == 2) {
          uVar3 = thunk_FUN_03f9944c(DAT_09175ee8);
          FUN_06e27220(uVar3,DAT_0919c020);
        }
      }
      else if (local_24 < 5) {
        if (local_24 == 3) {
          uVar3 = thunk_FUN_03f9944c(DAT_09175ef0);
          FUN_06e27338(uVar3,DAT_0919c028);
        }
        else if (local_24 == 4) {
          uVar3 = thunk_FUN_03f9944c(DAT_09175ef8);
          FUN_06e27560(uVar3,DAT_0919c030);
        }
      }
      else {
        if (local_24 == 5) {
          puVar2 = &DAT_09196f28;
        }
        else {
          if (local_24 != 6) {
            return 0;
          }
          puVar2 = &DAT_09196f30;
        }
        uVar3 = thunk_FUN_03f9944c(*puVar2);
        System_Object___ctor(uVar3,0);
      }
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

