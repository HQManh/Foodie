// rea decompile_all
// name: Datpt.Cook_Order.CameraControl$$Start
// address: 0x41a15e4
// body: available
// range: 0x41a15e4-0x41a1727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_CameraControl__Start(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float local_24;
  
  if ((DAT_09516846 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184238);
    FUN_03f5c2a4(&DAT_0918c980);
    FUN_03f5c2a4(&DAT_092093a0);
    DAT_09516846 = 1;
  }
  iVar1 = UnityEngine_Screen__get_height(0);
  iVar2 = UnityEngine_Screen__get_width(0);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c980);
  }
  fVar4 = (float)Datpt_Utilities__GetValue
                           ((float)iVar1 / (float)iVar2,0x3fe38e39,0x400e38e4,uVar5,uVar6,0);
  local_24 = fVar4 / 5.0;
  uVar3 = FUN_03f5c42c(DAT_09535450,&local_24);
  if (*(int *)(DAT_09184238 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09184238);
  }
  Datpt_ObserverPattern_EventManager__EmitEventData(0,DAT_092093a0,uVar3);
  uVar3 = Datpt_Cook_Order_CameraControl__IEFixCamera(0x40a00000,fVar4,param_1);
  UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar3,0);
  *(float *)(param_1 + 0x44) = fVar4;
  return;
}

