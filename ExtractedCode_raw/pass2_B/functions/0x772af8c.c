// rea decompile_all
// name: AssetKits.ParticleImage.ParticleImage$$DoStop
// address: 0x772af8c
// body: available
// range: 0x772af8c-0x772b1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x772b0fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772b1b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_ParticleImage__DoStop(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_09522a3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ab658);
    FUN_03f5c2a4(&DAT_091ab660);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522a3f = 1;
  }
  uVar2 = AssetKits_ParticleImage_ParticleImage__get_isMain(param_1);
  if ((((uVar2 & 1) != 0) && (lVar7 = param_1[0x1c], lVar7 != 0)) &&
     (uVar1 = *(uint *)(lVar7 + 0x18), 0 < (int)uVar1)) {
    lVar8 = 0;
    do {
      if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar3 = *(long *)(lVar7 + 0x20 + lVar8 * 8);
      if (lVar3 == 0) goto LAB_0772b0fc;
      AssetKits_ParticleImage_ParticleImage__DoStop(lVar3,param_2 & 1);
      uVar1 = *(uint *)(lVar7 + 0x18);
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < (int)uVar1);
  }
  lVar7 = param_1[0xe3];
  *(undefined4 *)((long)param_1 + 0x854) = 0;
  param_1[0x10b] = 0;
  if (lVar7 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar6) {
        if ((param_2 & 1) != 0) {
          *(undefined2 *)((long)param_1 + 0x805) = 0x100;
          AssetKits_ParticleImage_ParticleImage__Clear(param_1);
        }
        *(undefined1 *)((long)param_1 + 0x804) = 0;
        if (*(char *)((long)param_1 + 0x807) != '\0') {
          *(undefined1 *)((long)param_1 + 0x807) = 0;
          *(undefined2 *)((long)param_1 + 0x805) = 0x100;
          AssetKits_ParticleImage_ParticleImage__Clear(param_1);
        }
        lVar7 = param_1[0xe3];
        if (lVar7 != 0) {
          iVar6 = 0;
          goto LAB_0772b0cc;
        }
        break;
      }
      lVar8 = FUN_057e0998(lVar7,iVar6,DAT_091ab660);
      if (lVar8 == 0) break;
      lVar7 = param_1[0xe3];
      iVar6 = iVar6 + 1;
      *(undefined1 *)(lVar8 + 0x18) = 0;
    } while (lVar7 != 0);
  }
  goto LAB_0772b0fc;
  while( true ) {
    lVar8 = FUN_057e0998(lVar7,iVar6,DAT_091ab660);
    if (lVar8 == 0) break;
    lVar7 = param_1[0xe3];
    iVar6 = iVar6 + 1;
    *(undefined1 *)(lVar8 + 0x18) = 0;
    if (lVar7 == 0) break;
LAB_0772b0cc:
    if (*(int *)(lVar7 + 0x18) <= iVar6) {
      *(undefined1 *)(param_1 + 0x10a) = 0;
      (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
      (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
      uVar4 = AssetKits_ParticleImage_ParticleImage__get_particleTrailRenderer(param_1);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      plVar5 = (long *)AssetKits_ParticleImage_ParticleImage__get_particleTrailRenderer(param_1);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
        plVar5 = (long *)AssetKits_ParticleImage_ParticleImage__get_particleTrailRenderer(param_1);
        if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0772b19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
          return;
        }
      }
      break;
    }
  }
LAB_0772b0fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

