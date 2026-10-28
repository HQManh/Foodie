// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SimpleBBQOrder$$GetRandomSubOrder
// address: 0x41bb0e4
// body: available
// range: 0x41bb0e4-0x41bb26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41bb268 to 0x57e1934 FUN_057e1934 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41bb26c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SimpleBBQOrder__GetRandomSubOrder
               (long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((DAT_0951696e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adf20);
    FUN_03f5c2a4(&DAT_091adf10);
    FUN_03f5c2a4(&DAT_091adf28);
    FUN_03f5c2a4(&DAT_091adf30);
    FUN_03f5c2a4(&DAT_091adf38);
    FUN_03f5c2a4(&DAT_0917c578);
    DAT_0951696e = 1;
  }
  iVar1 = UnityEngine_Random__Range(param_2,param_3 + 1,0);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  lVar3 = thunk_FUN_03f9944c(DAT_0917c578);
  FUN_057e053c(lVar3,uVar7,DAT_091adf10);
  if (lVar3 != 0) {
    iVar5 = *(int *)(lVar3 + 0x18);
    if (0 < iVar5) {
      iVar6 = 0;
      do {
        uVar2 = UnityEngine_Random__Range(iVar6,iVar5,0);
        uVar7 = FUN_057e0998(lVar3,uVar2,DAT_091adf30);
        uVar4 = FUN_057e0998(lVar3,iVar6,DAT_091adf30);
        FUN_057e09ec(lVar3,iVar6,uVar7,DAT_091adf38);
        FUN_057e09ec(lVar3,uVar2,uVar4,DAT_091adf38);
        iVar5 = *(int *)(lVar3 + 0x18);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    if (iVar5 <= iVar1) {
      iVar1 = iVar5;
    }
    FUN_057e1934(lVar3,0,iVar1,DAT_091adf20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

