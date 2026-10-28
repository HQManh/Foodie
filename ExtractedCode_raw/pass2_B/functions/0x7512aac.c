// rea decompile_all
// name: System.TimeZoneInfo.TZifHead$$.ctor
// address: 0x7512aac
// body: available
// range: 0x7512aac-0x7512c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7512c50 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7512c54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo_TZifHead___ctor(int *param_1,long param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09521721 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_09521721 = 1;
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) < 0x2c)) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    puVar5 = &DAT_09217dd8;
  }
  else {
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = System_TimeZoneInfo__TZif_ToInt32(param_2,param_3);
    *param_1 = iVar3;
    if (iVar3 == 0x545a6966) {
      if (param_3 + 4U < *(uint *)(param_2 + 0x18)) {
        cVar2 = *(char *)(param_2 + (int)(param_3 + 4U) + 0x20);
        iVar3 = *(int *)(DAT_0918bdc0 + 0xe4);
        cVar1 = (cVar2 == '3') << 1;
        if (cVar2 == '2') {
          cVar1 = '\x01';
        }
        *(char *)(param_1 + 1) = cVar1;
        if (iVar3 == 0) {
          FUN_03f5c424();
        }
        iVar3 = System_TimeZoneInfo__TZif_ToInt32(param_2,param_3 + 0x14);
        param_1[2] = iVar3;
        iVar3 = System_TimeZoneInfo__TZif_ToInt32(param_2,param_3 + 0x18);
        param_1[3] = iVar3;
        iVar3 = System_TimeZoneInfo__TZif_ToInt32(param_2,param_3 + 0x1c);
        param_1[4] = iVar3;
        iVar3 = System_TimeZoneInfo__TZif_ToInt32(param_2,param_3 + 0x20);
        param_1[5] = iVar3;
        iVar3 = System_TimeZoneInfo__TZif_ToInt32(param_2,param_3 + 0x24);
        param_1[6] = iVar3;
        iVar3 = System_TimeZoneInfo__TZif_ToInt32(param_2,param_3 + 0x28);
        param_1[7] = iVar3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    puVar5 = &DAT_092101a8;
  }
  uVar6 = thunk_FUN_03fc39d4(puVar5);
  uVar7 = thunk_FUN_03fc39d4(&DAT_0921a200);
  System_ArgumentException___ctor(uVar4,uVar6,uVar7);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091f0df8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar6);
}

