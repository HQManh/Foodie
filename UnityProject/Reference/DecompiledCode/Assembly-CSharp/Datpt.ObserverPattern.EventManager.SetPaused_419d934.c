// rea decompile_all
// name: Datpt.ObserverPattern.EventManager$$SetPaused
// address: 0x419d934
// body: available
// range: 0x419d934-0x419db2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419db20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x419db24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x419db28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_ObserverPattern_EventManager__SetPaused(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  if ((DAT_0951681d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f498);
    FUN_03f5c2a4(&DAT_0919f4b0);
    FUN_03f5c2a4(&DAT_0919f490);
    FUN_03f5c2a4(&DAT_091769f0);
    FUN_03f5c2a4(&DAT_091a6630);
    FUN_03f5c2a4(&DAT_091a6638);
    FUN_03f5c2a4(&DAT_091a6640);
    FUN_03f5c2a4(&DAT_09184238);
    FUN_03f5c2a4(&DAT_091a9788);
    FUN_03f5c2a4(&DAT_091a9790);
    DAT_0951681d = 1;
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_091769f0);
  FUN_06f8143c(lVar3,DAT_0919f490);
  if (*(int *)(DAT_09184238 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_09184238 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    FUN_06f825ec(&local_80,lVar4,DAT_0919f4b0);
    while( true ) {
      while( true ) {
        uVar5 = FUN_0726da7c(&local_80,DAT_091a6638);
        uVar1 = local_70;
        if ((uVar5 & 1) == 0) {
          FUN_0726dba4(&local_80,DAT_091a6630);
          if (*(int *)(DAT_09184238 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar6 = (long *)(*(long *)(DAT_09184238 + 0xb8) + 0x10);
          *plVar6 = lVar3;
          thunk_FUN_03f5d7b8(plVar6,lVar3);
          return;
        }
        cVar2 = (char)local_68;
        uVar5 = System_String__op_Equality(local_70,param_1,0);
        if ((uVar5 & 1) != 0) break;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06f821e0(lVar3,uVar1,cVar2 != '\0',DAT_0919f498);
      }
      if (lVar3 == 0) break;
      FUN_06f821e0(lVar3,uVar1,param_2 & 1,DAT_0919f498);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

