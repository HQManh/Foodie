// rea decompile_all
// name: Coffee.UIEffects.UIVertexUtil$$Flip
// address: 0x43fa154
// body: available
// range: 0x43fa154-0x43fa293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fa290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIVertexUtil__Flip(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float local_dc;
  float fStack_d8;
  undefined4 local_d4;
  undefined1 auStack_d0 [96];
  
  if ((DAT_09517e2a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    DAT_09517e2a = 1;
  }
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        FUN_05894708(&local_dc,param_1,iVar5,DAT_091b1750);
        fVar4 = fStack_d8;
        fVar3 = local_dc;
        memcpy(&local_140,auStack_d0,0x60);
        uVar2 = DAT_091b1760;
        local_d4 = 0;
        local_dc = -fVar3;
        if ((param_2 & 1) == 0) {
          local_dc = fVar3;
        }
        fStack_d8 = -fVar4;
        if ((param_3 & 1) == 0) {
          fStack_d8 = fVar4;
        }
        memcpy(auStack_d0,&local_140,0x60);
        FUN_0589476c(param_1,iVar5,&local_dc,uVar2);
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

