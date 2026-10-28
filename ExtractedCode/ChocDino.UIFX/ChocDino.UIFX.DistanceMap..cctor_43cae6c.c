// rea decompile_all
// name: ChocDino.UIFX.DistanceMap$$.cctor
// address: 0x43cae6c
// body: available
// range: 0x43cae6c-0x43cb103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43cb0f0 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_DistanceMap___cctor(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((DAT_09517bea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09183bf0);
    FUN_03f5c2a4(&DAT_09184618);
    FUN_03f5c2a4(&DAT_09214470);
    FUN_03f5c2a4(&DAT_09214478);
    DAT_09517bea = 1;
  }
  lVar2 = DAT_09184618;
  lVar5 = DAT_09183bf0;
  iVar1 = *(int *)(DAT_09184618 + 0xe4);
  **(undefined4 **)(DAT_09183bf0 + 0xb8) = 1;
  if (iVar1 == 0) {
    FUN_03f5c424();
    lVar2 = DAT_09184618;
    lVar5 = DAT_09183bf0;
  }
  puVar4 = *(undefined4 **)(lVar5 + 0xb8);
  if ((*(byte *)(*(long *)(lVar2 + 0xb8) + 4) >> 2 & 1) != 0) {
    *puVar4 = 2;
  }
  puVar4[2] = 7;
  uVar6 = 0xd;
  uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xd,0);
  if ((uVar3 & 1) == 0) {
    uVar6 = 0x12;
    uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0x12,0);
    if ((uVar3 & 1) != 0) goto LAB_043caf70;
    uVar6 = 0x17;
    uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0x17,0);
    if ((uVar3 & 1) != 0) goto LAB_043caf70;
    uVar6 = 0xc;
    uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xc,0);
    if ((uVar3 & 1) != 0) goto LAB_043caf70;
  }
  else {
LAB_043caf70:
    *(undefined4 *)(*(long *)(DAT_09183bf0 + 0xb8) + 8) = uVar6;
  }
  if (*(int *)(DAT_09184618 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = DAT_09183bf0;
  if (((*(byte *)(*(long *)(DAT_09184618 + 0xb8) + 4) >> 1 & 1) != 0) &&
     (uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xc,0), lVar5 = DAT_09183bf0,
     (uVar3 & 1) != 0)) {
    *(undefined4 *)(*(long *)(DAT_09183bf0 + 0xb8) + 8) = 0xc;
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  if (*(int *)(lVar5 + 8) == 7) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09214478,0);
    lVar5 = *(long *)(DAT_09183bf0 + 0xb8);
  }
  *(undefined4 *)(lVar5 + 4) = 7;
  uVar6 = 0xf;
  uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xf,0);
  if ((uVar3 & 1) == 0) {
    uVar6 = 0x13;
    uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0x13,0);
    if ((uVar3 & 1) == 0) {
      uVar6 = 0xe;
      uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xe,0);
      if ((uVar3 & 1) == 0) {
        uVar6 = 7;
        uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(7,0);
        if ((uVar3 & 1) == 0) goto LAB_043cb06c;
      }
    }
  }
  *(undefined4 *)(*(long *)(DAT_09183bf0 + 0xb8) + 4) = uVar6;
LAB_043cb06c:
  if (*(int *)(DAT_09184618 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = DAT_09183bf0;
  if (((*(byte *)(*(long *)(DAT_09184618 + 0xb8) + 4) >> 1 & 1) != 0) &&
     (uVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xe,0), lVar5 = DAT_09183bf0,
     (uVar3 & 1) != 0)) {
    *(undefined4 *)(*(long *)(DAT_09183bf0 + 0xb8) + 4) = 0xe;
  }
  if (*(int *)(*(long *)(lVar5 + 0xb8) + 4) != 7) {
    return;
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__LogWarning(DAT_09214470,0);
  return;
}

