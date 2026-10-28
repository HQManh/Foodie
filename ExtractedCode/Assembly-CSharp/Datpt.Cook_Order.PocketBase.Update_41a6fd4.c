// rea decompile_all
// name: Datpt.Cook_Order.PocketBase$$Update
// address: 0x41a6fd4
// body: available
// range: 0x41a6fd4-0x41a711f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a711c to 0x4197bb8 Datpt.Utilities$$CheckShowTutorial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_PocketBase__Update(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  if ((DAT_0951688a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091d5e90);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_0951688a = 1;
  }
  Datpt_Cook_Order_ItemMovingBase__CheckItemMovingMoveOverHightLight(param_1);
  if ((char)param_1[0x14] == '\0') {
LAB_041a7094:
    uVar6 = (undefined4)param_1[0x12];
LAB_041a709c:
    uVar2 = (**(code **)(*param_1 + 0x318))(param_1,*(undefined8 *)(*param_1 + 800));
    if ((uVar2 & 1) != 0) {
      bVar1 = *(char *)((long)param_1 + 0xa1) != '\0';
      goto LAB_041a70c8;
    }
  }
  else {
    fVar5 = (float)UnityEngine_Time__get_time(0);
    if (*(float *)(param_1 + 0x13) <= fVar5 - *(float *)((long)param_1 + 0x9c)) {
      lVar4 = param_1[0x16];
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      *(undefined1 *)(param_1 + 0x14) = 0;
      goto LAB_041a7094;
    }
    uVar6 = (undefined4)param_1[0x12];
    if ((char)param_1[0x14] == '\0') goto LAB_041a709c;
  }
  bVar1 = false;
LAB_041a70c8:
  uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar3,param_1,DAT_091d5e90,0);
  if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Datpt_Utilities__CheckShowTutorial(uVar6,param_1 + 0x18,bVar1,uVar3,0);
  return;
}

