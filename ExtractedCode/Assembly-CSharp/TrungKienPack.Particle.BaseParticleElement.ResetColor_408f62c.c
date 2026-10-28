// rea decompile_all
// name: TrungKienPack.Particle.BaseParticleElement$$ResetColor
// address: 0x408f62c
// body: available
// range: 0x408f62c-0x408f78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408f788 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408f78c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_BaseParticleElement__ResetColor(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09515cfc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aeee0);
    FUN_03f5c2a4(&DAT_091aeee8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515cfc = 1;
  }
  local_48 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x28) + 0x18);
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    if (0 < (int)uVar2) {
      uVar7 = 0;
      lVar8 = 0x20;
      do {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0408f788;
        uVar4 = FUN_057e0998(*(long *)(param_1 + 0x20),uVar7 & 0xffffffff,DAT_091aeee8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
        if ((uVar5 & 1) != 0) {
          if ((*(long *)(param_1 + 0x20) == 0) ||
             (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x20),uVar7 & 0xffffffff,DAT_091aeee8),
             lVar6 == 0)) {
LAB_0408f788:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_48 = UnityEngine_ParticleSystem__get_main(lVar6,0);
          lVar6 = *(long *)(param_1 + 0x28);
          if (lVar6 == 0) goto LAB_0408f788;
          if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          puVar1 = (undefined8 *)(lVar6 + lVar8);
          uStack_68 = puVar1[3];
          local_70 = puVar1[2];
          uStack_58 = puVar1[5];
          uStack_60 = puVar1[4];
          local_50 = puVar1[6];
          uStack_78 = puVar1[1];
          local_80 = *puVar1;
          UnityEngine_ParticleSystem_MainModule__set_startColor(&local_48,&local_80,0);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x38;
      } while (uVar2 != uVar7);
    }
  }
  return;
}

