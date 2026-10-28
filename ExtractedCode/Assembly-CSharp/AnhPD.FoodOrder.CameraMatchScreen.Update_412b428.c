// rea decompile_all
// name: AnhPD.FoodOrder.CameraMatchScreen$$Update
// address: 0x412b428
// body: available
// range: 0x412b428-0x412b59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412b59c to 0x412b1b8 AnhPD.FoodOrder.CameraMatchScreen$$Apply (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CameraMatchScreen__Update
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09516300 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516300 = 1;
  }
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Application__get_isPlaying(0);
  if ((uVar3 & 1) != 0) {
    if ((*(char *)(param_5 + 0x58) == '\0') &&
       (uVar3 = AnhPD_FoodOrder_CameraMatchScreen__get_IsLevelReady(), (uVar3 & 1) != 0)) {
      *(undefined1 *)(param_5 + 0x58) = 1;
    }
    else {
      iVar1 = *(int *)(param_5 + 0x40);
      iVar2 = UnityEngine_Screen__get_width(0);
      if ((iVar1 == iVar2) &&
         (iVar1 = *(int *)(param_5 + 0x44), iVar2 = UnityEngine_Screen__get_height(0),
         iVar1 == iVar2)) {
        fVar8 = *(float *)(param_5 + 0x48);
        fVar7 = *(float *)(param_5 + 0x4c);
        fVar6 = *(float *)(param_5 + 0x50);
        fVar5 = *(float *)(param_5 + 0x54);
        fVar4 = (float)UnityEngine_Screen__get_safeArea(0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095163cf == '\0') {
          FUN_03f5c2a4(&DAT_09189c30);
          DAT_095163cf = '\x01';
        }
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((((fVar8 == fVar4) && (fVar7 == param_2)) && (fVar6 == param_3)) && (fVar5 == param_4))
        {
          return;
        }
      }
    }
  }
  AnhPD_FoodOrder_CameraMatchScreen__Apply(param_5);
  return;
}

