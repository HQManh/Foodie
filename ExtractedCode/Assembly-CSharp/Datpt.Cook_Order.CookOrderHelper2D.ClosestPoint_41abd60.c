// rea decompile_all
// name: Datpt.Cook_Order.CookOrderHelper2D$$ClosestPoint
// address: 0x41abd60
// body: available
// range: 0x41abd60-0x41abedf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Datpt_Cook_Order_CookOrderHelper2D__ClosestPoint(float param_1,float param_2,long param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_095168b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a40e8);
    FUN_03f5c2a4(&DAT_091a40f0);
    FUN_03f5c2a4(&DAT_091a40f8);
    FUN_03f5c2a4(&DAT_091afaa8);
    FUN_03f5c2a4(&DAT_091afab0);
    DAT_095168b7 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if ((param_3 == 0) || (*(int *)(param_3 + 0x18) == 0)) {
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    fVar4 = **(float **)(DAT_0918cb68 + 0xb8);
  }
  else {
    FUN_057e185c(&local_58,param_3,DAT_091afaa8);
    fVar4 = param_1;
    fVar5 = 3.4028235e+38;
    while (uVar1 = FUN_071bd28c(&local_58,DAT_091a40f0), (uVar1 & 1) != 0) {
      fVar3 = param_2;
      fVar2 = (float)Datpt_Cook_Order_CookOrderHelper2D__ClosestPoint(param_1,local_48);
      fVar3 = (param_1 - fVar2) * (param_1 - fVar2) + (param_2 - fVar3) * (param_2 - fVar3);
      if (fVar3 < fVar5) {
        fVar4 = fVar2;
        fVar5 = fVar3;
      }
    }
    FUN_071bd288(&local_58,DAT_091a40e8);
  }
  return fVar4;
}

