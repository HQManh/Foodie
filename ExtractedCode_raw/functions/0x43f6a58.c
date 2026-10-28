// rea decompile_all
// name: Coffee.UIEffects.ShadowUtil$$DoShadow
// address: 0x43f6a58
// body: available
// range: 0x43f6a58-0x43f6c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f6c84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void Coffee_UIEffects_ShadowUtil__DoShadow
               (float param_1,float param_2,float param_3,long param_4,long param_5,int param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  undefined1 auStack_1ac [108];
  undefined1 auStack_140 [108];
  int local_d4 [2];
  undefined1 auStack_cc [108];
  
  if ((DAT_09517e17 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    FUN_03f5c2a4(&DAT_0918ab28);
    DAT_09517e17 = 1;
  }
  local_d4[0] = 0;
  local_d4[1] = 0;
  if ((param_5 != 0) &&
     (Coffee_UIEffects_UIVertexUtil__ExpandCapacity(param_4,*(int *)(param_5 + 0x18) + 1),
     param_4 != 0)) {
    iVar1 = *(int *)(param_4 + 0x18);
    local_d4[1] = 0;
    local_d4[0] = iVar1;
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    if (0 < param_6) {
      iVar4 = 0;
      uVar8 = (CONCAT44(param_2,param_1) ^ 0x4416000044160000) &
              ~CONCAT44(-(uint)(600.0 < param_2),-(uint)(600.0 < param_1));
      uVar8 = uVar8 ^ 0x4416000044160000 ^
              (uVar8 ^ 0x8000000080000000) &
              CONCAT44(-(uint)(param_2 < -600.0),-(uint)(param_1 < -600.0));
      uVar6 = **(undefined8 **)(DAT_0918cb68 + 0xb8);
      do {
        iVar4 = iVar4 + 1;
        fVar7 = (float)((ulong)uVar6 >> 0x20) + (float)(uVar8 >> 0x20) / (float)iVar4;
        uVar6 = CONCAT44(fVar7,(float)uVar6 + (float)uVar8 / (float)iVar4);
        Coffee_UIEffects_ShadowUtil__ApplyShadow
                  (uVar6,fVar7,param_3,param_4,param_5,local_d4 + 1,local_d4);
        param_3 = param_3 * 0.75;
      } while (param_6 != iVar4);
    }
    iVar4 = *(int *)(param_4 + 0x18);
    if (0 < iVar4 - iVar1) {
      iVar3 = 0;
      lVar2 = DAT_0918ab28;
      do {
        lVar5 = **(long **)(lVar2 + 0xb8);
        if (lVar5 != 0) {
          FUN_05894708(auStack_140,param_4,iVar3,DAT_091b1750);
          memcpy(auStack_cc,auStack_140,0x6c);
          (**(code **)(lVar5 + 0x18))
                    (auStack_1ac,0x40000000,*(undefined8 *)(lVar5 + 0x40),auStack_cc,
                     *(undefined8 *)(lVar5 + 0x28));
          memcpy(auStack_cc,auStack_1ac,0x6c);
          FUN_0589476c(param_4,iVar3,auStack_cc,DAT_091b1760);
          iVar4 = *(int *)(param_4 + 0x18);
          lVar2 = DAT_0918ab28;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4 - iVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

