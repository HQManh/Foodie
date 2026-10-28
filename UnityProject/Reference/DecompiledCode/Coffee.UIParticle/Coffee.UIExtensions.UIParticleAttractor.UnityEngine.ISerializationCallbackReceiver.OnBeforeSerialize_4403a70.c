// rea decompile_all
// name: Coffee.UIExtensions.UIParticleAttractor$$UpgradeIfNeeded
// address: 0x4403a70
// body: available
// range: 0x4403a70-0x4403a73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleAttractor__UpgradeIfNeeded(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((DAT_09517e84 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091aeea8);
    FUN_03f5c2a4(&DAT_091aeeb0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09212870);
    DAT_09517e84 = 1;
  }
  puVar7 = (undefined8 *)(param_1 + 0x20);
  uVar8 = *puVar7;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = FUN_057e1004(*(long *)(param_1 + 0x28),*puVar7,DAT_091aeeb0);
    lVar2 = DAT_091aeea8;
    if ((uVar3 & 1) != 0) {
LAB_04402bb8:
      *puVar7 = 0;
      thunk_FUN_03f5d7b8(puVar7,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__Log(DAT_09212870,0);
      return;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar6 = uVar8;
          thunk_FUN_03f5d7b8(puVar6);
        }
        else {
          FUN_057e0c68(lVar4,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
        goto LAB_04402bb8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

