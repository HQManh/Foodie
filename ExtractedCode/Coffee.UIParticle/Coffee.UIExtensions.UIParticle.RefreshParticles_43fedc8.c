// rea decompile_all
// name: Coffee.UIExtensions.UIParticle$$RefreshParticles
// address: 0x43fedc8
// body: available
// range: 0x43fedc8-0x43ff0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fefd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticle__RefreshParticles(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 local_68;
  undefined8 local_58;
  
  if ((DAT_09517e76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c59c8);
    FUN_03f5c2a4(&DAT_091b1648);
    FUN_03f5c2a4(&DAT_091b1650);
    FUN_03f5c2a4(&DAT_091b1660);
    FUN_03f5c2a4(&DAT_091aeee0);
    FUN_03f5c2a4(&DAT_091b1668);
    FUN_03f5c2a4(&DAT_091aeee8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188ee8);
    DAT_09517e76 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x120);
  local_58 = 0;
  local_68 = 0;
  if (lVar7 != 0) {
    iVar3 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar3) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar3,0);
    }
    lVar7 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar7 != 0) {
      iVar3 = UnityEngine_Transform__get_childCount(lVar7,0);
      if (0 < iVar3) {
        iVar10 = 0;
        do {
          lVar7 = UnityEngine_Component__get_transform(param_1,0);
          if ((lVar7 == 0) || (lVar7 = UnityEngine_Transform__GetChild(lVar7,iVar10,0), lVar7 == 0))
          goto LAB_043fefd0;
          uVar4 = FUN_04a6b048(lVar7,&local_58,DAT_091c59c8);
          lVar7 = DAT_091b1648;
          if ((uVar4 & 1) != 0) {
            lVar5 = *(long *)(param_1 + 0x120);
            if (lVar5 == 0) goto LAB_043fefd0;
            lVar8 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_043fefd0;
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar9 = local_58;
              thunk_FUN_03f5d7b8(puVar9);
            }
            else {
              FUN_057e0c68(lVar5,local_58,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar3 != iVar10);
      }
      lVar7 = *(long *)(param_1 + 0x120);
      if (lVar7 != 0) {
        iVar3 = 0;
        do {
          if (*(int *)(lVar7 + 0x18) <= iVar3) {
            if (param_2 != 0) {
              if (*(int *)(param_2 + 0x18) < 1) {
                return;
              }
              iVar3 = 0;
              iVar10 = 0;
              goto LAB_043fefec;
            }
            break;
          }
          lVar7 = FUN_057e0998(lVar7,iVar3,DAT_091b1668);
          if (lVar7 == 0) break;
          Coffee_UIExtensions_UIParticleRenderer__Reset(lVar7,iVar3);
          lVar7 = *(long *)(param_1 + 0x120);
          iVar3 = iVar3 + 1;
        } while (lVar7 != 0);
      }
    }
  }
LAB_043fefd0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_043fefec:
  lVar7 = FUN_057e0998(param_2,iVar3,DAT_091aeee8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
  iVar2 = iVar10;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = Coffee_UIParticleInternal_ParticleSystemExtensions__GetMainEmitter(lVar7,param_2);
    lVar5 = Coffee_UIExtensions_UIParticle__GetRenderer(param_1,iVar10);
    if ((lVar5 == 0) ||
       (Coffee_UIExtensions_UIParticleRenderer__Set(lVar5,param_1,lVar7,0,uVar6), lVar7 == 0))
    goto LAB_043fefd0;
    local_68 = UnityEngine_ParticleSystem__get_trails(lVar7,0);
    uVar4 = UnityEngine_ParticleSystem_TrailModule__get_enabled(&local_68,0);
    iVar2 = iVar10 + 1;
    if ((uVar4 & 1) != 0) {
      lVar5 = Coffee_UIExtensions_UIParticle__GetRenderer(param_1,iVar10 + 1);
      if (lVar5 == 0) goto LAB_043fefd0;
      Coffee_UIExtensions_UIParticleRenderer__Set(lVar5,param_1,lVar7,1,uVar6);
      iVar2 = iVar10 + 2;
    }
  }
  iVar10 = iVar2;
  iVar3 = iVar3 + 1;
  if (*(int *)(param_2 + 0x18) <= iVar3) {
    return;
  }
  goto LAB_043fefec;
}

